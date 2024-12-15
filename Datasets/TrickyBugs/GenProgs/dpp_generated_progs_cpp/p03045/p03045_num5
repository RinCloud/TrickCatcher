#include <iostream>
#include <vector>
#include <queue>

using namespace std;

typedef pair<int, int> pii;

int main() {
    int N, M;
    cin >> N >> M;
    
    vector<vector<int>> adjList(N + 1);
    vector<int> degree(N + 1, 0);
    vector<int> target(N + 1, -1);
    
    for (int i = 0; i < M; i++) {
        int X, Y, Z;
        cin >> X >> Y >> Z;
        
        adjList[X].push_back(Y);
        adjList[Y].push_back(X);
        
        if (Z % 2 == 0) {
            degree[X]++;
            degree[Y]++;
        } else {
            target[X] = 0;
            target[Y] = 1;
        }
    }
    
    queue<pii> q;
    vector<int> cost(N + 1, -1);
    
    for (int i = 1; i <= N; i++) {
        if (degree[i] == 0) {
            q.push(make_pair(i, 0));
            cost[i] = 0;
        }
    }
    
    while (!q.empty()) {
        pii front = q.front();
        q.pop();
        
        int u = front.first;
        int parity = front.second;
        
        for (int v : adjList[u]) {
            if (cost[v] == -1) {
                cost[v] = 1 - cost[u];
                q.push(make_pair(v, cost[v]));
            }
        }
    }
    
    int result = 0;
    for (int i = 1; i <= N; i++) {
        if (target[i] != -1 && target[i] != cost[i]) {
            result++;
        }
    }
    
    cout << result << endl;
    
    return 0;
}