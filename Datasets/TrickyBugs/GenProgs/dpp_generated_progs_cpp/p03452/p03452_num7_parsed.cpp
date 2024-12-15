#include <iostream>
#include <vector>
#include <queue>
#include <algorithm>
using namespace std;

int main() {
    int N, M;
    cin >> N >> M;
    
    vector<vector<pair<int, int>>> graph(N + 1);
    vector<int> visited(N + 1, 0);
    
    for (int i = 0; i < M; i++) {
        int L, R, D;
        cin >> L >> R >> D;
        
        graph[L].push_back(make_pair(R, D));
        graph[R].push_back(make_pair(L, -D));
    }
    
    for (int i = 1; i <= N; i++) {
        if (visited[i] != 0) {
            continue;
        }
        
        queue<int> q;
        q.push(i);
        visited[i] = 1;
        
        while (!q.empty()) {
            int curr = q.front();
            q.pop();
            
            for (pair<int, int> neighbor : graph[curr]) {
                int next = neighbor.first;
                int diff = neighbor.second;
                
                if (visited[next] == 0) {
                    visited[next] = visited[curr] + 1;
                    q.push(next);
                }
                
                if (visited[next] - visited[curr] != diff) {
                    cout << "No" << endl;
                    return 0;
                }
            }
        }
    }
    
    cout << "Yes" << endl;
    
    return 0;
}