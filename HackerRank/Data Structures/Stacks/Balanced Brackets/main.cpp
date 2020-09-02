#include<bits/stdc++.h>
using namespace std;

string solve(string inp) {
    stack<int> s;
    for(auto i: inp) {
            if(s.size() == 0)
                s.push(i);
            else
            switch(i) {
                case '}':
                    if(s.top() == '{') s.pop();
                    else {return "NO";}
                    break;
                case ']':
                    if(s.top() == '[') s.pop();
                    else {return "NO";}
                    break;
                case ')':
                    if(s.top() == '(') s.pop();
                    else {return "NO";}
                    break;
                default: s.push(i);
            }
        }
        if(s.size() == 0) {
            return "YES";
        } else {
            return "NO";
        }
}

int main() {
    int n;
    cin>>n;
    while(n--) {
        string inp;
        cin>>inp;
        cout<<solve(inp)<<endl;
    }
    return 0;
}