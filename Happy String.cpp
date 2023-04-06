#include <iostream>
using namespace std;

int main() {
	int T;
	string s;
	cin >> T;
	while(T--){
	    cin >> s;
	    int counting = 0;
	    for(int i = 0; i < s.size(); i++){
	        if(s[i] == 'a' || s[i] == 'e' || s[i] == 'i' || s[i] == 'o' || s[i] == 'u'){
	            counting++;
	            if(counting == 3){
	                cout << "Happy" << endl;
	                break;
	            }
	        }
	        else counting = 0;
	    }
	    if(counting != 3){
	        cout << "Sad" << endl;
	    }
	    }

	}
