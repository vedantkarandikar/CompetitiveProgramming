#include<bits/stdc++.h>
using namespace std;

struct directed_graph {
    vector<vector<int>> adj;

    void add_edge(int i, int j) {
        adj[i].push_back(j);
    }

    directed_graph(int nodes): adj(nodes){}
};

struct undirected_graph {
    vector<vector<int>> adj;

    void add_edge(int i, int j) {
        adj[i].push_back(j);
        adj[j].push_back(i);
    }

    undirected_graph(int nodes): adj(nodes){}
};

struct undirected_weighted_graph {
    vector<vector<pair<int, int>>> adj;

    void add_edge(int i, int j, int w) {
        adj[i].push_back({j, w});
        adj[j].push_back({i, w});
    }
    
    undirected_weighted_graph(int nodes): adj(nodes){}
};

int main() {
    return 0;
}