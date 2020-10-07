#include <bits/stdc++.h>
#include <queue>
using namespace std;

struct graph {

    vector<vector<int>> adj;
	int n;
    

	void bfs(int x) {
		queue<int> q;
		vector<bool> visited(n, false);
    	vector<int> distance(n, 0);
		visited[x] = true;
		distance[x] = 0;
		q.push(x);
		while(!q.empty()) {
			int s = q.front(); q.pop();
			for(auto u: adj[s]) {
				if(visited[u]) continue;
				visited[u] = true;
				distance[u] = distance[s] + 1;
				q.push(u);
			}
		}
	}

    graph(int n) : adj(n){
		this->n = n;
	} 

};


int main() { 
    return 0;
}
