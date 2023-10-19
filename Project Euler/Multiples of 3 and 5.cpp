#include <map>
#include <set>
#include <list>
#include <cmath>
#include <ctime>
#include <deque>
#include <queue>
#include <stack>
#include <string>
#include <bitset>
#include <cstdio>
#include <limits>
#include <vector>
#include <climits>
#include <cstring>
#include <cstdlib>
#include <fstream>
#include <numeric>
#include <sstream>
#include <iostream>
#include <algorithm>
#include <unordered_map>

using namespace std;

long long int sum(long long int x){
    return x*(x + 1) / 2;
}

int main(){
    long long int t;
    cin >> t;
    while(t--){
        long long int n;
        cin >> n;
        n--;
        long long int sum3 = 3* sum(n / 3);
        long long int sum5 = 5* sum(n / 5);
        long long int sum15 = 15 * sum(n / 15);
        
        cout << sum3 + sum5 - sum15 << endl;
    }
}
