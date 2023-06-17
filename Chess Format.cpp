#include <iostream>
using namespace std;

int main() {
	int T, a, b;
	cin >> T;
	while(T--){
	    cin >> a >> b;
	    int d = a + b;
	    if(d < 3){
	        cout << 1 << endl;
	    }
	    if(d <=10 && d >= 3){
	        cout << 2 << endl;
	    }
	    if(d <= 60 && d >= 11){
	        cout << 3 <<endl;
	    }
	    if(d > 60){
	        cout << 4 <<endl;
	    }
	}
	return 0;
}
