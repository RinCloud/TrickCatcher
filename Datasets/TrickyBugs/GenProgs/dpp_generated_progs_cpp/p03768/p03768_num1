#include <iostream>
#include <vector>
#include <queue>

using namespace std;

int main() {
    int N, M;
    cin >> N >> M;
    
    vector<vector<int>> adj(N + 1);
    for (int i = 0; i < M; i++) {
        int a, b;
        cin >> a >> b;
        adj[a].push_back(b);
        adj[b].push_back(a);
    }
    
    int Q;
    cin >> Q;
    
    vector<int> colors(N + 1, 0);
    vector<vector<int>> distances(N + 1, vector<int>(11, -1));
    
    for (int i = 0; i < Q; i++) {
        int v, d, c;
        cin >> v >> d >> c;
        
        queue<int> q;
        q.push(v);
        distances[v][0] = 0;
        
        while (!q.empty()) {
            int curr = q.front();
            q.pop();
            
            for (int next : adj[curr]) {
                if (distances[next][0] == -1 || distances[next][0] > distances[curr][0] + 1) {
                    distances[next][0] = distances[curr][0] + 1;
                    q.push(next);
                }
            }
        }
        
        for (int j = 0; j < N + 1; j++) {
            if (distances[j][0] >= 0 && distances[j][0] <= d) {
                colors[j] = c;
            }
        }
        
        for (int j = 1; j <= 10; j++) {
            for (int k = 1; k < N + 1; k++) {
                if (distances[k][j - 1] == -1) {
                    continue;
                }
                
                for (int next : adj[k]) {
                    if (distances[next][j] == -1 || distances[next][j] > distances[k][j - 1] + 1) {
                        distances[next][j] = distances[k][j - 1] + 1;
                    }
                }
            }
        }
        
        for (int j = 1; j <= N; j++) {
            distances[j][0] = -1;
            for (int k = 1; k <= 10; k++) {
                distances[j][k] = -1;
            }
        }
    }
    
    for (int i = 1; i <= N; i++) {
        cout << colors[i] << endl;
    }
    
    return 0;
}