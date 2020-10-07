#include <bits/stdc++.h>
using namespace std;

struct graph {
    vector<vector<int>> adj;
    vector<bool> visited;
    void dfs(int s) {
	if(visited[s]) return;
	visited[s] = true;
	for(auto u: adj[s])
	    dfs(u);
    }

    graph(int n) : adj(n), visited(n){} 

};


int main() { 
    return 0;
}
