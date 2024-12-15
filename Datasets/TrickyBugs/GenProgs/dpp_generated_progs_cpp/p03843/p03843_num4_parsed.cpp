#include <iostream>
#include <vector>
#include <queue>

using namespace std;

vector<int> colors;
vector<vector<int>> tree;

void dfs(int node, int parent, int d) {
    if (d == 0 || colors[node] == 1) {
        colors[node] = 2;
    } else {
        colors[node] = 1;
    }
    
    for (int next : tree[node]) {
        if (next != parent) {
            dfs(next, node, d - 1);
        }
    }
}

int main() {
    int N;
    cin >> N;
    
    tree.resize(N + 1);
    
    for (int i = 0; i < N - 1; i++) {
        int a, b;
        cin >> a >> b;
        
        tree[a].push_back(b);
        tree[b].push_back(a);
    }
    
    string s;
    cin >> s;
    
    colors.resize(N + 1);
    for (int i = 1; i <= N; i++) {
        colors[i] = s[i - 1] - '0';
    }
    
    int start_vertex = -1;
    for (int i = 1; i <= N; i++) {
        if (colors[i] == 1) {
            start_vertex = i;
            break;
        }
    }
    
    if (start_vertex == -1) {
        cout << 0 << endl;
        return 0;
    }
    
    int max_distance = 0;
    queue<pair<int, int>> bfs_queue;
    bfs_queue.push({start_vertex, 0});
    vector<bool> visited(N + 1, false);
    visited[start_vertex] = true;
    
    while (!bfs_queue.empty()) {
        int node = bfs_queue.front().first;
        int distance = bfs_queue.front().second;
        bfs_queue.pop();
        
        for (int next : tree[node]) {
            if (!visited[next]) {
                visited[next] = true;
                max_distance = max(max_distance, distance + 1);
                bfs_queue.push({next, distance + 1});
            }
        }
    }
    
    dfs(start_vertex, 0, max_distance);
    
    int combinations = 0;
    for (int i = 1; i <= N; i++) {
        if (colors[i] == 1 || colors[i] == 2) {
            combinations++;
        }
    }
    
    cout << combinations << endl;
    
    return 0;
}