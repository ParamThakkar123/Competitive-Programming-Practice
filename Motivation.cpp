#include <bits/stdc++.h>
using namespace std;

int main(){
    int n, T, X;
    cin >> T;
    
    while(T--){
        cin >> n >> X;
        vector<pair<int, int>> v;
        for(int i = 0; i < n; i++){
            int a, b;
            cin >> a >> b;
            v.push_back({b, a});
        }
        sort(v.begin(), v.end());
        for(int j = n-1;  j >= 0; j--){
            if(v[j].second <= X){
                cout << v[j].first << endl;
                break;
            }
        }
    }
    return 0;
}
