#include<bits/stdc++.h>
using namespace std;
using ll = long long;
enum options{
    update,
    query
};

options resolveOptions(string inp) {
    if(inp == "UPDATE") return update;
    else return query;
}

bool in(int b, int x, int y) {
    if(x<=b && b<=y) return true;
    return false;
}

long calculateSum(int x1, int y1, int z1,int x2, int y2, int z2, map<vector<int>, ll> m) {
    ll s = 0;
    for(auto i: m) {
        vector<int> e = i.first;
        if(in(e[0], x1, x2) && in(e[1], y1, y2) && in(e[2], z1, z2)) {
            s += i.second;
        }
    }
    return s;
}

int main() {
    int t;
    cin>>t;
    while(t--) {
        int n, m;
        cin>>n>>m;
        map<vector<int>, ll> inserts;
        while(m--) {
            string s;
            int x, y, z;
            ll W;
            int x1, y1, z1, x2, y2, z2;
            cin>>s;
            switch(resolveOptions(s)) {
                case update:
                    cin>>x>>y>>z>>W;
                    inserts[{x,y,z}] = W;
                break;
                case query:
                    cin>>x1>>y1>>z1>>x2>>y2>>z2;
                    cout<<calculateSum(x1, y1, z1, x2, y2, z2, inserts)<<endl;
                break;
            }
        }
    }
    return 0;
}