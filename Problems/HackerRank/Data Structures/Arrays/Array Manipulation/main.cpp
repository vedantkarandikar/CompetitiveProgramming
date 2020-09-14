#include<bits/stdc++.h>
using ll = long long;
using namespace std;

int main() {
    ll n, q, a, b, k;
    cin>>n>>q;
    vector<int> x(n);
    while(q--) {
        cin>>a>>b>>k;
        x[a-1] += k;
        if (b <= n) x[b] -= k;
    }
    ll m = 0, t = 0;
    for(auto i: x) {
        t += i;
        m = max(t, m);
    }   
    cout<<m<<endl;
    return 0;
}   