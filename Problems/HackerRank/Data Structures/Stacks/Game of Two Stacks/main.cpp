#include<bits/stdc++.h>
using namespace std;

void reverseStack(stack<int>& stack) {
    int item;
    std::stack<int> tmpStack;

    while (!stack.empty()) {
	item = stack.top();
	stack.pop();
	tmpStack.push(item);
    }
    stack = tmpStack;
    return;
}
int main() {
    stack<int> a, b;
    int g;
    cin>>g;
    while(g--) {
	int n, m, x;
	cin>>n>>m>>x;
	while(n--) {
	    int tmp;
	    cin>>tmp;
	    a.push(tmp);
	}
	while(m--) {
	    int tmp;
	    cin>>tmp;
	    b.push(tmp);
	}
	reverseStack(a);
	reverseStack(b);
	int c = 0;
	while(!a.empty() or !b.empty()) {
	    if(!a.empty() and !b.empty()) {
		if(a.top() > b.top()) {
		    if(m+a.top() < x) {
			m += a.top();
			a.pop();
			c++;
		    }
		    else if(m+b.top()< x) {
			m+=b.top();
			b.pop();
			c++;
		    }
		} 
		else {
		    if(m+b.top() < x) {
			m += b.top();
			b.pop();
			c++;
		    }
		    else if(m+a.top() < x) {
			m+=a.top();
			a.pop();
			c++;
		    }
		}
	    }
	}
	cout<<c<<endl;
    }
    return 0;
}
