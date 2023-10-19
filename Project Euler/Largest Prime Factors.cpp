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


int main(){
    int t;
    cin >> t;
    while(t--){
        unsigned long long n;
        cin >> n;
        
        for(unsigned long long i = 2; i * i <= n; i++){
            while(n % i == 0 && n != i){
                n = n / i;
            }
        }
        
        cout << n << endl;
    }
    return 0;
}
