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
        
        unsigned long long a = 1;
        unsigned long long b = 2;
        
        unsigned long long sum = 0;
        while(b <= n){
            if(b % 2 == 0){
                sum += b;
            }
            auto next = a+b;
            a = b;
            b = next;
        }
        cout << sum << endl;        
    }
    return 0;
}
