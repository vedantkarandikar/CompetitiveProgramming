#include<bits/stdc++.h>
using namespace std;
int main() {
    int n;
    cin>>n;
    if(n>4)
    if(n%2) cout<<"NO";
    else cout<<"YES";
    else {
        if(n%4) cout<<"NO";
        else cout<<"YES";
    }
    return 0;
}