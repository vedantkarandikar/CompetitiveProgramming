#include <algorithm>
#include<bits/stdc++.h>
#include <vector>
using namespace std;
int main() {
    int b, n, tmp;
    cin>>n;
    b = n;
    vector<int> a;
    while(n--) {
	cin>>tmp;
	a.push_back(tmp);
    }
    //for(auto i:a) cout<<i;
    sort(a.begin(), a.end());
    cout<<a[b-1]*a[b-2]<<endl;
    return 0;
}
