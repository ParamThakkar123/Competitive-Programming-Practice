#include <bits/stdc++.h>
using namespace std;

bool dfs(vector<int> a,int curr, int sum, int target){
    sum += a[curr];
    if(sum == target) return true;
    for(int i = curr + 1; i < a.size(); i++){
        if(dfs(a, i, sum, target)) return true;
    }
    sum -= a[curr];
    return false;
}

int main() {
	int T;
	cin >> T;
	while(T--){
	    int n, m;
	    cin >> n >> m;
	    vector<int> v(n);
	    for(int &x : v) cin >> x;
	    bool res = false;
	    for(int i = 0; i < n; i++){
	        res = res || dfs(v, i, 0, m);
	    }
	    if(res) cout << "Yes" << endl;
	        else{
	            cout << "No" << endl;
	        }
	}
	return 0;
}
