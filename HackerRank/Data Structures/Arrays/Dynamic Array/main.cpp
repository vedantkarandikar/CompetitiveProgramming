#include<bits/stdc++.h>
using namespace std;
using ll = long long;
int main() {
    int n, q, l = 0;
    cin>>n>>q;
    vector<vector<int>> a(n);
    while(q--) {
        ll t, x, y;
        cin>>t>>x>>y;
        if(t==1) {
            a[(x^l)%n].push_back(y);
        }
        else {
            ll size = a[(x^l)%n].size();
            if(size) {
                l = a[(x^l)%n][y%size];
                cout<<l<<endl;
            }
        }
    }
    return 0;
}