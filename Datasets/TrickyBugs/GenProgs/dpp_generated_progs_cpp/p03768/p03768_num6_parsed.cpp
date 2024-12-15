#include <iostream>
#include <vector>
#include <queue>
using namespace std;

vector<int> color; // vector to store the color of each vertex
vector<vector<int>> graph; // adjacency list to store the graph
vector<int> distance; // vector to store the distance of each vertex

void bfs(int start, int d, int c) {
    queue<int> q;
    q.push(start);
    distance[start] = 0;
    
    while (!q.empty()) {
        int v = q.front();
        q.pop();
        
        if (distance[v] > d) {
            break;
        }
        
        color[v] = c;
        
        for (int u : graph[v]) {
            if (distance[u] == -1) {
                distance[u] = distance[v] + 1;
                q.push(u);
            }
        }
    }
}

int main() {
    int N, M;
    cin >> N >> M;
    
    // initialize data structures
    color.resize(N + 1, 0);
    graph.resize(N + 1);
    
    // input graph
    for (int i = 0; i < M; i++) {
        int a, b;
        cin >> a >> b;
        graph[a].push_back(b);
        graph[b].push_back(a);
    }
    
    int Q;
    cin >> Q;
    
    // process operations
    for (int i = 0; i < Q; i++) {
        int v, d, c;
        cin >> v >> d >> c;
        distance.assign(N + 1, -1);
        bfs(v, d, c);
    }
    
    // output colors
    for (int i = 1; i <= N; i++) {
        cout << color[i] << endl;
    }
    
    return 0;
}