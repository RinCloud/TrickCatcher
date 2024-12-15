#include <iostream>
#include <vector>

using namespace std;

vector<vector<int>> adj_list;
vector<int> color;
int min_operations;

void dfs(int v, int p, int c) {
    color[v] = c;
    for (int u : adj_list[v]) {
        if (u != p) {
            if (color[u] == -1) {
                dfs(u, v, 1 - c);
            } else if (color[u] == c) {
                min_operations++;
            }
        }
    }
}

int main() {
    int N, M;
    cin >> N >> M;
    
    adj_list.resize(N+1);
    color.resize(N+1, -1);
    
    for (int i = 0; i < M; i++) {
        int a, b;
        cin >> a >> b;
        adj_list[a].push_back(b);
        adj_list[b].push_back(a);
    }
    
    min_operations = 0;
    dfs(1, 0, 0);
    
    for (int i = 1; i <= N; i++) {
        if (color[i] == -1) {
            cout << -1 << endl;
            return 0;
        }
    }
    
    cout << min_operations << endl;
    
    return 0;
}