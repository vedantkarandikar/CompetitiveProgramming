#include<bits/stdc++.h>
using namespace std;

void decode_huff(node * root, string s) {
    node* temp = root;
    for (char c : s) {
        temp = c == '0' ? temp->left : temp->right;
        if (temp->data) {
            cout << temp->data;
            temp = root;
        }
    }
}

int main() {	
	return 0;
}
