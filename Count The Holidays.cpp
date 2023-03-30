#include <bits/stdc++.h>
using namespace std;
const int n = 1e7+10;
int A[n];

int main(){
    int T, N, counting;
    cin >> T;
    while(T--){
        cin >> N;
        for(int i = 0; i < N; i++){
            cin >> A[i];
        }
    counting = 0;
    for(int i = 0; i < N; i++){
        if(A[i]%7 != 6 && A[i]%7 != 0){
            counting++;
        }
    }
    cout << counting + 8 << endl;
}
}
