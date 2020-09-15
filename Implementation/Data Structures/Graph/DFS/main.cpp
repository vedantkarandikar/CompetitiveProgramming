#include <bits/stdc++.h>
using namespace std;

struct Edge {
    int from, to, cost;
    Edge(int from, int to, int cost) {
	this->from = from;
	this->to = to;
	this->cost = cost;
    }
};

struct Graph {
    int n;
    vector<vector<Edge>> adjList;
    queue<int> q;
    vector<bool> used;
    vector<int> d, p;
    vector<int> color;

    vector<int> time_in, time_out;
    int dfs_timer = 0;


    Graph(int n) : d(n), p(n), used(n) {
	this->n = n;
	for(int i=0;i<n;i++) {
	    vector<Edge> tmp;
	    adjList.push_back(tmp);
	}
    }

    void addDirectedEdge(int u, int v, int cost) {
	adjList[u].push_back(Edge(u, v, cost));
    }

    void addUndirectedEdge(int u, int v, int cost) {
	addDirectedEdge(u, v, cost);
    }

    void addUnweightedUndirectedEdge(int u, int v) {
	addUndirectedEdge(u, v, 1);
    }

    void dfs(int v) {
	time_in[v] = dfs_timer++;
	color[v] = 1;
	for (Edge e : adjList[v]) { 
	    int u = e.to;
	    if (color[u] == 0)
		dfs(u);
	}
	color[v] = 2;
	time_out[v] = dfs_timer++;
    }

};

int main() {

    //example
    const int n = 15;
    Graph g = Graph(n);
    g.addUnweightedUndirectedEdge(0, 7);
    g.addUnweightedUndirectedEdge(0, 9);
    g.addUnweightedUndirectedEdge(0, 11);
    g.addUnweightedUndirectedEdge(7, 11);
    g.addUnweightedUndirectedEdge(7, 6);
    g.addUnweightedUndirectedEdge(7, 3);
    g.addUnweightedUndirectedEdge(6, 5);
    g.addUnweightedUndirectedEdge(3, 4);
    g.addUnweightedUndirectedEdge(2, 3);
    g.addUnweightedUndirectedEdge(2, 12);
    g.addUnweightedUndirectedEdge(12, 8);
    g.addUnweightedUndirectedEdge(8, 1);
    g.addUnweightedUndirectedEdge(1, 10);
    g.addUnweightedUndirectedEdge(10, 9);
    g.addUnweightedUndirectedEdge(9, 8);

    for(auto i: g.adjList) {
	for(auto j: i) {
	    cout<<"From: "<<j.from<<" To: "<<"Cost: "<<j.cost<<endl;
	}
    }


    g.dfs(0);

    return 0;
}
