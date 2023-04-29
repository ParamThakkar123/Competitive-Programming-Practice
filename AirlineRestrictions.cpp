#include <bits/stdc++.h>
using namespace std;

int main() {
    int T;
    cin >> T;
    while(T--){
        int A, B, C, D, E;
        cin >> A >> B >> C >> D >> E;
        int sum1, sum2, sum3;
        sum1 = A + B;
        sum2 = B + C;
        sum3 = A + C;
        if(sum1 <= D && C <= E){
            cout << "YES" << endl;
        }
        else if(sum2 <= D && A <= E){
            cout << "YES" << endl;
        }
        else if(sum3 <= D && B <= E){
            cout << "YES" << endl;
        }
        else{
            cout << "NO" << endl;
        }
    }
	return 0;
}
