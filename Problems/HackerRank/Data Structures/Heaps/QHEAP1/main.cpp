#include<bits/stdc++.h>
using namespace std;


int main() {
    int n;
    cin>>n;
    vector<int> h; 
    while(n--) {
        int q;
        cin>>q;
        switch(q) {
            case 1: {
                int e;
                cin>>e;
                h.push_back(e);
                break;
            }
            case 2: {
                int e;
                cin>>e;
                remove(h.begin(),h.end(),e);
                break;
            }
            case 3: {
                cout<<*min_element(h.begin(), h.end())<<endl;
                break;
            }
        }
    }   
    return 0;
}