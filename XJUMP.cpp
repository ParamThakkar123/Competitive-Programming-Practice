#include <iostream>
using namespace std;

int main() {
	int T, X, Y, d;
	cin >> T;
	while(T--){
	    cin >> X >> Y;
	    if(X % Y == 0){
	        cout << X / Y << endl;
	    }
	    if(X < Y){
	        cout << X << endl;
	    }
	    else if(X % Y != 0){
	        d = X / Y + X % Y;
	        cout << d << endl;
	    }
	}
	return 0;
}
