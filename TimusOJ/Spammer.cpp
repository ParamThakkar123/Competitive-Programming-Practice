#include <bits/stdc++.h>
using namespace std;

int main(){
    int n;
    cin >> n;

    unordered_map<string, int> mp;

    for(int i = 1; i <= n; i++){
        string s;
        cin >> s;
        mp[s]++;
    }

    for(auto x : mp){
        if(x.second > 1){
            cout << x.first << endl;
        }
    }
}
