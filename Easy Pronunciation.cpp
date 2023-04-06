#include <bits/stdc++.h>
using namespace std;

int main() {
	int T, n;
  //The test case and size variables
	string s;
	cin >> T;
  //taking input of the test cases
	while(T--){
    //The test case loop
	    cin >> n;
	    cin >> s;
	    if(s.size() == n){
	        int counting = 0;
	        for(int i = 0; i < n; i++){
	            if(s[i] == 'a' ||  s[i] == 'e' || s[i] == 'i' || s[i] == 'o' || s[i] == 'u'){
	                counting = 0;
	            }
	            else{
	                counting++;
	                if(counting >= 4){
	                    break;
	                }
	            }
	        }
	        if(counting >= 4){
	            cout << "NO" << endl;
	        }
	        else{
	            cout << "YES" << endl;
	        }
	    }
	}
	return 0;
}
