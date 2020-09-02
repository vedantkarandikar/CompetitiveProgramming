#include<bits/stdc++.h>
#define SQ_C 6
using namespace std;
int main() {
    vector<vector<int>> a(SQ_C , vector<int> (SQ_C));
    for(int i=0; i<SQ_C;i++) {
        for(int j=0; j<SQ_C;j++) {
            int temp;
            cin>>temp;
            a[i][j] = temp;
        }
    }
    vector<int> m;
    for(int i=1; i<SQ_C-1;i++) {
        for(int j=1; j<SQ_C-1;j++) {
            m.push_back(a[i][j] + 
            a[i-1][j-1] + a[i-1][j] + a[i-1][j+1] +
            a[i+1][j-1] + a[i+1][j] + a[i+1][j+1]);
        }
    }
    cout<<*max_element(m.begin(), m.end());
    return 0;
}