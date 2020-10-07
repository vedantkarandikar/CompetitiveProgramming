#include<bits/stdc++.h>
#define INF INT_MAX
using namespace std;

struct graph {
    int n;
    vector<vector<pair<int, int>>> adj;

    void add_edge(int i, int j, int w) {
        adj[i].push_back({j, w});
        adj[j].push_back({i, w});
    }
    
    vector<int> dijkstras(int x) {
        priority_queue<pair<int, int>> q;
        vector<int> distance(n, INF);
        vector<bool> processed(n);
        distance[x] = 0;
        q.push({0, x});
        while(!q.empty()) {
            int a = q.top().second; q.pop();
            if(processed[a]) continue;
            for(auto u: adj[a]) {
                int b = u.first, w = u.second;
                if(distance[a]+w < distance[b]) {
                    distance[b] = distance[a] + w;
                    q.push({-distance[b], b});
                }
            }
        }
        return distance;
    }

    graph(int n): adj(n+1){
        this-> n = n+1;
    }
};


int main() {
    graph g(5);
    g.add_edge(3, 4, 6);
    g.add_edge(4, 5, 2);
    g.add_edge(5, 1, 1);
    g.add_edge(1, 2, 5);
    g.add_edge(2, 3, 2);
    g.add_edge(4, 1, 9);
    vector<int> x = g.dijkstras(1);
    int c = 0;
    for(auto i: x) {
        if(!c) {
            c++; continue;
        }
        cout<<"1 -> "<<c++<<" = "<<i<<endl;
    }
    return 0;
}