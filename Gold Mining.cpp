#include <iostream>
using namespace std;

int main() {
	int T, N, X, Y;
	cin >> T;
	while(T--){
	    cin >> N >> X >> Y;
	    int totalpeople = N + 1;
	    int gold = totalpeople * Y;
	    if(gold >= X){
	        cout << "YES" << endl;
	    }
	    if(gold < X){
	        cout << "NO" << endl;
	    }
	}
	return 0;
}
