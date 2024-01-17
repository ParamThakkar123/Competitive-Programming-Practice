#include<bits/stdc++.h>

using namespace std;

using ll = long long;

ll floor(ll x, ll m) {
    ll r = (x % m + m) % m;
    return (x - r) / m;
}

int main() {
    ll a, m, l, r;
    cin >> a >> m >> l >> r;
    l -= a, r -= a;
    cout << floor(r, m) - floor(l - 1, m) << endl;
}
