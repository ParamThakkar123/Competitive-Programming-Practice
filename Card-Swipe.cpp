#include <bits/stdc++.h>
using namespace std;
const int N = 1e6+2;
int arr[N];

int main() {
	int T;
	cin >> T;
	while(T--){
	    int n;
	    cin >> n;
	    for(int i = 0; i < n; i++){
	        cin >> arr[i];
	    }
	    map<int, int> mp;
	    
	    for(int i = 0; i < n; i++){
	        mp[arr[i]]++;
	    }
	    
	    int count = 0;
	    int maxi = 0;
	    vector<int> freq(n+2, 0);
	    
	    for(int i = 0; i < n; i++){
	        freq[arr[i]]++;
	        
	        if(freq[arr[i]] == 1){
	            count++;
	        }
	        
	        if(freq[arr[i]] == 2){
	            
	            freq[arr[i]] = 0;
	            count--;
	        }
	        
	        maxi = max(maxi, count);
	        
	    }
	    
	    cout << maxi << endl;
	}
	return 0;
}
