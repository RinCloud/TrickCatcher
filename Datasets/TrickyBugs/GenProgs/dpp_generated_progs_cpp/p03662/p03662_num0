#include <iostream>
#include <vector>
#include <queue>

using namespace std;

vector<int> bfs(int start, vector<vector<int>>& adj_list) {
    int n = adj_list.size();
    vector<int> dist(n, -1);
    dist[start] = 0;
    
    queue<int> q;
    q.push(start);
    
    while (!q.empty()) {
        int curr = q.front();
        q.pop();
        
        for (int neighbor : adj_list[curr]) {
            if (dist[neighbor] == -1) {
                dist[neighbor] = dist[curr] + 1;
                q.push(neighbor);
            }
        }
    }
    
    return dist;
}

int main() {
    int n;
    cin >> n;
    
    vector<vector<int>> adj_list(n);
    
    for (int i = 0; i < n-1; i++) {
        int a, b;
        cin >> a >> b;
        a--;
        b--;
        adj_list[a].push_back(b);
        adj_list[b].push_back(a);
    }
    
    vector<int> fennec_dist = bfs(0, adj_list);
    vector<int> snuke_dist = bfs(n-1, adj_list);
    
    int fennec_count = 0;
    int snuke_count = 0;
    
    for (int i = 0; i < n; i++) {
        if (fennec_dist[i] <= snuke_dist[i]) {
            fennec_count++;
        } else {
            snuke_count++;
        }
    }
    
    if (fennec_count > snuke_count) {
        cout << "Fennec" << endl;
    } else {
        cout << "Snuke" << endl;
    }
    
    return 0;
}