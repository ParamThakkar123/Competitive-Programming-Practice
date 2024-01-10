#include <bits/stdc++.h>
using namespace std;

int main(){
    int m, n, k;
    cin >> m >> n >> k;
    for(int i = 0; i < m; i++){
            string line;
            cin >> line;
            string outputline;
        for(int j = 0; j < n; j++){
            for(int l = 0; l < k; l++){
                outputline += line[j];
            }
        }

        for(int l = 0; l < k; l++){
            cout << outputline << endl;
        }
    }
}
