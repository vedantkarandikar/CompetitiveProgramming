#include <bits/stdc++.h>
using namespace std;

int main() {
    string s;
    int n, l;
    cin>>s;
    l = s.size();
    cin>>n;
    while(n--) {
	int a, b;
	cin>>a>>b;
	if(s[(a-1)%l]==s[(b-1)%l]) cout<<"YES"<<endl;
	else cout<<"NO"<<endl;
    }
    return 0;
}
