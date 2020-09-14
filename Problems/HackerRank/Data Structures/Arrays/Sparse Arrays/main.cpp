#include<bits/stdc++.h>
using namespace std;
using ll = long long;

int main() {
    int n, q;
    string tmp;
    vector<string> a,b;
    cin>>n;
    while(n--) {
        cin>>tmp;
        a.push_back(tmp);
    }
    cin>>q;
    vector<int> r(q);
    while(q--) {
        cin>>tmp;
        b.push_back(tmp);
    }
    for(int j=0;j<b.size();j++){
        for(auto i: a) {
            if(i == b[j]) r.at(j)++;
        }
    }
    for(auto i: r) {
        cout<<i<<endl;
    }
    return 0;
}