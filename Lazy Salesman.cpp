#include <bits/stdc++.h>
using namespace std;
const int N = 1e5+2;
int arr[N];

int kthmax(int arr[], int n, int k){
    sort(arr,arr+n);  // sorting the array
        return arr[n-k];          // return kth largest element
}

int main(){
    int T, n, w;
    cin >> T;
    while(T--){
        cin >> n >> w;
        for(int i = 0; i < n; i++){
            cin >> arr[i];
        }
        int count = n;
        int sum = 0;
        int k = 1;
        while(sum != w){
            sum += kthmax(arr, n, k);
            k++;
            count--;
            if(sum >= w){
                break;
            }
        }
        cout << count << endl;
    }
}
