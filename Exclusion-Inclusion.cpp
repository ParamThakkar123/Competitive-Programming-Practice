#include <bits/stdc++.h>
using namespace std;

int main() {
	int T;
	cin >> T;
	while(T--){
	    int n;
	    cin >> n;
	    
	    vector<long long> v(n);
	    long long sum = 0;
	    for(auto &x : v){
	        cin >> x;
	        sum = sum + x;
	    }
	    
	    sort(v.begin(), v.end());
	    
	    for(int i = 0; i < n; i++){
	        cout << sum << " ";
	        sum -= v[i];
	    }
	    cout << endl;
	}
	return 0;
}
