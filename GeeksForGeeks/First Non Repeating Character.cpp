#include <bits/stdc++.h>
using namespace std;

string firstNonRepeating(string a){
    string ans = "";
    unordered_map<char, int> mp;
    
    queue<char> q;
    for(int i = 0; i < a.length(); i++){
        if(mp.find(a[i]) == mp.end()){
            q.push(a[i]);
        }
        mp[a[i]]++;
        while(!q.empty() && mp[q.front()] > 1){
            q.pop();
        }
        
        if(!q.empty()){
            ans += q.front();
        }
        else{
            ans += "#";
        }
    }
    
    return ans;
}

int main(){
    string s;
    cin >> s;
    
    string ans = firstNonRepeating(s);
    cout << ans << endl;
}
