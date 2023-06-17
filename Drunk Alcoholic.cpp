#include <iostream>
using namespace std;

int main() {
	int T, k;
	cin >> T;
	while(T--){
	  cin >> k;
	  if(k%2 == 1){
	  cout << k+2 << endl;
	  }
else if(k==0){
	    cout<<0<< endl;
}
	    else{
	    cout << k << endl;
	    }
	}
	return 0;
}
