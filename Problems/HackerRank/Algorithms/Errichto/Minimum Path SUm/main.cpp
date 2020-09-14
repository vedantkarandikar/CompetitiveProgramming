#include<bits/stdc++.h>
using namespace std;

int main() {
    int n, m;
    cin>>n>>m;
    int a[n][m], dp[n][m];
    for(int i=0;i<n;i++) {
        for(int j=0;j<m;j++) cin>>a[i][j];
    }
    for(int i=n-1;i>1;i--) {
        for(int j=m-1;j>1;j--) {
            dp[i][j] = min(a[i-1][j], a[i][j-1]);
        }
    }
    for(int i=0;i<n;i++) {
        for(int j=0;j<m;j++) cout<<dp[i][j];
    }
    return 0;
}