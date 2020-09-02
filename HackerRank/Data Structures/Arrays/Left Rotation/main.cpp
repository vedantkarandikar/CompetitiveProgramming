#include<bits/stdc++.h>
using ll = long long;
using namespace std;

int main() {
    int n, d, tmp;
    cin>>n>>d;
    vector<int> a;
    while(n--) {
        cin>>tmp;
        a.push_back(tmp);
    }
    rotate(a.begin(), a.begin()+d, a.end());
    for(auto i: a) cout<<i<<" ";
    return 0;
}