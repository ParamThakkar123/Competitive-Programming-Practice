#include <bits/stdc++.h>
using namespace std;

int dp[50][20011];

bool solve(int i, int target, int arr[]){
    if(target == 0) return true;
    if(i < 0) return false;
    if(dp[i][target] != -1) return dp[i][target];
    bool ans = solve(i-1, target, arr);
    if(arr[i] <= target){
        ans = (ans || solve(i-1, target - arr[i], arr));
    }
    
    return dp[i][target] = ans;
}

int main(){
    int t;
    cin >> t;
    while(t--){
        int n, m;
        cin >> n >> m;
        int arr[n];
        for(int i = 0; i < n; i++){
            cin >> arr[i];
        }
        for(int i = 0; i < n + 5; i++){
            for(int j = 0; j < m + 5; j++){
                dp[i][j] = -1;
            }
        }
        if(solve(n-1, m, arr)){
            cout << "Yes" << endl;
        }
        else{
            cout << "No" << endl;
        }
    }
}
