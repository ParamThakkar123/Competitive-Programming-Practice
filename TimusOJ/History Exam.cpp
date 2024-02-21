#include <bits/stdc++.h>
using namespace std;

int main(){
    set<int> st;
    int n, m;

    scanf("%d", &n);
    for(int i = 0, a; i < n; i++){
        scanf("%d", &a);
        st.insert(a);
    }

    scanf("%d", &m);
    int ans = 0;

    for(int i = 0, a; i < m; i++){
        scanf("%d", &a);
        if(st.find(a) != st.end()) ans++;
    }

    printf("%d\n", ans);
}
