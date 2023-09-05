#include <bits/stdc++.h>
using namespace std;
const int N = 1e6+2;
int A[N];

    bool isPossible(int arr[], int n, int m, int curr_min){
        int studentsRequired = 1;
        int curr_sum = 0;
        
        for(int i = 0; i < n; i++){
            if(arr[i] > curr_min){
                return false;
            }
            
            if(curr_sum + arr[i] > curr_min){
                studentsRequired++;
                curr_sum = arr[i];
                
                if(studentsRequired > m){
                    return false;
                }
            }
            else{
                curr_sum = curr_sum + arr[i];
            }
        }
        return true;
    }
    //Function to find minimum number of pages.
    int findPages(int A[], int N, int M) 
    {
        long long sum = 0;
        
        if(N < M){
            return -1;
        }
        
        for(int i = 0; i < N; i++){
            sum = sum + A[i];
        }
        
        int start = 0, end = sum;
        int result = INT_MAX;
        
        while(start <= end){
            int mid = end + ((start - end)/2);
            
            if(isPossible(A, N, M, mid)){
                result = min(result, mid);
                
                end = mid-1;
            }
            else{
                start = mid + 1;
            }
        }
        return result;
    }

int main(){
    int n, m;
    cin >> n >> m;
    for(int i = 0; i < n; i++){
        cin >> A[i];
    }
    
    cout << findPages(A, n, m) << endl;
}
