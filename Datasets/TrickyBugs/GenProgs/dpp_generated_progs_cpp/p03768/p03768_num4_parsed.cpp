#include <iostream>
#include <vector>
#include <queue>
using namespace std;

const int MAX_N = 100000;

vector<int> graph[MAX_N + 1];
int colors[MAX_N + 1];

void repaintVertices(int v, int d, int c) {
    queue<int> q;
    vector<int> distances(MAX_N + 1, -1);
    distances[v] = 0;
    q.push(v);
    
    while (!q.empty()) {
        int u = q.front();
        q.pop();
        
        if (distances[u] > d) {
            break;
        }
        
        if (colors[u] == 0) {
            colors[u] = c;
        }
        
        for (int neighbor : graph[u]) {
            if (distances[neighbor] == -1) {
                distances[neighbor] = distances[u] + 1;
                q.push(neighbor);
            }
        }
    }
}

int main() {
    int N, M;
    cin >> N >> M;
    
    for (int i = 0; i < M; i++) {
        int a, b;
        cin >> a >> b;
        graph[a].push_back(b);
        graph[b].push_back(a);
    }
    
    int Q;
    cin >> Q;
    
    for (int i = 0; i < Q; i++) {
        int v, d, c;
        cin >> v >> d >> c;
        repaintVertices(v, d, c);
    }
    
    for (int i = 1; i <= N; i++) {
        cout << colors[i] << endl;
    }
    
    return 0;
}