#include <bits/stdc++.h>
using namespace std;

int main(){
    int n, k;
    cin >> n >> k;

    vector<int> arr(n);
    for(int i = 0; i < n; i++){
        cin >> arr[i];
    }

    unordered_map<int, int> seen;
    pair<int, int> ans = {-1, -1};
    for(int i = 0; i < n; i++){
        int complement = k - arr[i];
        if(seen.find(complement) != seen.end()){
            ans = make_pair(seen[complement], i);
        }

        seen[arr[i]] = i;
    }

    cout << arr[ans.first] << " " << arr[ans.second] << endl;
}
