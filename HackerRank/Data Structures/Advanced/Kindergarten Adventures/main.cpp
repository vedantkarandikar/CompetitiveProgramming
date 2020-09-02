#include<bits/stdc++.h>
using namespace std;
int main() {
    int n;
    cin>>n;
    vector<int> a(n), x(n), v;
    for(auto &i: a) cin>>i;
    for(int i=0;i<n;i++){
        if(a[i] != 0 && a[i] != n) {
            x[i+1]++;
            x[(n+i-a[i]+1)%n]--;
        }
    }
    // for(int i=0;i<n;i++) cout<<x[i];
    int m = INT_MIN, t = 0, in = 1;
    for(int i=0;i<n;i++) {
        t += x[i];
        if(t>m) {
            m = t;
            in = i+1;
        }
    }  
    cout<<in<<endl;
    return 0;
}