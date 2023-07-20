#include <bits/stdc++.h>
using namespace std;

int main() {
	int T;
	cin >> T;
	while(T--){
	    int X, Y, R;
	    cin >> X >> Y >> R;
	    
	    int extra = R / 30;
	    
	    int total = X + extra;
	    float plates = (float) ((float)total / (float) Y);
	    
	    cout << ceil(plates) << endl;
	}
	return 0;
}
