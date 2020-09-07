#include <bits/stdc++.h>
using namespace std;

struct node {
    int val = 0;
    node* left = nullptr;
    node* right = nullptr;
    node(int val, node* left, node* right) {
	this->val = val;
	this->left = left;
	this->right = right;
    }
};

struct BST {
    private:node* root;
    public:
    node* search(int val) {
	return search(this->root, val);
    }

    node* search(node* root, int val) {
	if(!root or root->val==val) return root;
	if(root->val < val) return search(root->right, val);
	return search(root->left, val);
    }
};

int main() {
    return 0;
}
