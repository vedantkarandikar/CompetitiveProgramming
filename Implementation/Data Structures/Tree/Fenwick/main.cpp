#include <bits/stdc++.h>
using namespace std;
struct FenwickTree {
    vector<int> bit;  // binary indexed tree
    int n;

    FenwickTree(int n) {
        this->n = n;
        bit.assign(n, 0);
    }

    FenwickTree(vector<int> a) : FenwickTree(a.size()) {
        for (size_t i = 0; i < a.size(); i++)
            add(i, a[i]);
    }

    int f(int r) { // function, example: sum
        int ret = 0;
        for (; r >= 0; r = (r & (r + 1)) - 1)
            ; //  operation, example: ret += bit[r];
        return ret;
    }

    int f(int l, int r) { //function for range
        return f(r) - f(l - 1);
    }

    void add(int idx, int delta) {
        for (; idx < n; idx = idx | (idx + 1))
            bit[idx] += delta;
    }
};
