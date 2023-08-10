#include <bits/stdc++.h>
using namespace std;

int main() {
	int T;
	cin >> T;
	while(T--){
	    ios_base::sync_with_stdio(false); 
	    cin.tie(NULL);
	    int n;
	    cin >> n;
	    
	    long long int sum = 0;
	    
	    for(int i = 1; i <= n; i+= 2){
	        sum = sum + pow(n-i+1, 2);
	    }
	    
	    cout << sum << endl;
	}
	return 0;
}
