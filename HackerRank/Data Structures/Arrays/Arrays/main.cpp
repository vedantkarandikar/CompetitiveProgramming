#include<bits/stdc++.h>
using namespace std;

int main() {
    int n;
    vector<int> a;
    cin>>n;
    for(int i=0;i<n;i++) {
        int tmp;
        cin>>tmp;
        a.push_back(tmp);
    }
    reverse(a.begin(), a.end());
    for(vector<int> :: iterator i = a .begin(); i != a.end(); i++) {
        cout<<(*i)<<" ";
    }
    cout<<endl;
    return 0;
}