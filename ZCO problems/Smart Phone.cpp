#include <bits/stdc++.h>
using namespace std;
const int N = 6 * 1e5;
long long int budget[N];

bool compare(long long int a, long long int b){
    return a > b;
}

int main(){
    int n;
    cin >> n;
    
    for(int i = 0; i < n; i++){
        cin >> budget[i];
    }
    
    sort(budget, budget + n, compare);
    long long int maxRevenue = 0;
    for(int i = 0; i < n; i++){
        long long int revenue = budget[i] * (i+1);
        if(revenue > maxRevenue){
            maxRevenue = revenue;
        }
    }
    
    cout << maxRevenue << endl;
}
