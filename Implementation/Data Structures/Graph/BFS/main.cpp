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

    void bfs(int s) {
	q.push(s);
	used[s] = true;
	p[s] = -1;
	while (!q.empty()) {
	    int v = q.front();
	    q.pop();
	    for (Edge e : adjList[v]) {
		int u = e.to ;
		if (!used[u]) {
		    used[u] = true;
		    q.push(u);
		    d[u] = d[v] + 1;
		    p[u] = v;
		}
	    }
	}
    }

    void showPath(int u) {
	if (!used[u]) {
	    cout << "No path!";
	} else {
	    vector<int> path;
	    for (int v = u; v != -1; v = p[v])
		path.push_back(v);
	    reverse(path.begin(), path.end());
	    cout << "Path: ";
	    for (int v : path)
		cout << v << " ";
	}

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


    g.bfs(0);
    g.showPath(5);

    return 0;
}
