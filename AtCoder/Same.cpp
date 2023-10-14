#include <bits/stdc++.h>
using namespace std;
const int N = 1e3;
int arr[N];

int main(){
    int n;
    cin >> n;
    
    for(int i = 0; i < n; i++){
        cin >> arr[i];
    }
    
    int res = 0;
    for(int i = 0; i < n; i++){
        if(arr[i] == arr[i+1]){
            res++;
        }
    }
    
    if(res == n-1){
        cout << "Yes" << endl;
    }
    
    else{
        cout << "No" << endl;
    }
}
