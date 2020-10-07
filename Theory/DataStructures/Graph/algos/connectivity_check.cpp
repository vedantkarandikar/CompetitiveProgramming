#include <bits/stdc++.h>
#include <utility>
#include <vector>
using namespace std;

struct graph {
    vector<vector<int>> adj;
    vector<bool> visited;

    void addEdge(pair<int, int> edge) {
	adj[edge.first].push_back(edge.second);
	adj[edge.second].push_back(edge.second);
    }

    bool connectivity_check(int s) {
	dfs(s);
	for(auto i: visited) {
	    cout<<i<<endl;
	}
	return true;
    }

    void dfs(int s) {
	if(visited[s]) return;
	visited[s] = true;
	for(auto u: adj[s]) {
	    dfs(u);
	}
    }

    graph(int n) : adj(n), visited(n){}
};

int main() {
    graph g(5);
    g.addEdge({1, 2});
    g.addEdge({2, 3});
    g.addEdge({3, 4});
    g.addEdge({4, 5});
    cout<<g.connectivity_check(1);
    return 0;
}
