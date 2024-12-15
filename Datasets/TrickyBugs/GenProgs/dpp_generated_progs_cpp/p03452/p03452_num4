#include <iostream>
#include <vector>
#include <queue>
#include <tuple>
using namespace std;
 
int main() {
    int N, M;
    cin >> N >> M;
 
    vector<vector<pair<int, int>>> graph(N + 1);
    vector<bool> visited(N + 1, false);
 
    for (int i = 0; i < M; i++) {
        int L, R, D;
        cin >> L >> R >> D;
        graph[L].push_back(make_pair(R, D));
        graph[R].push_back(make_pair(L, -D));
    }
 
    vector<long long int> position(N + 1, 0);
 
    queue<int> q;
    for (int i = 1; i <= N; i++) {
        if (visited[i]) continue;
        q.push(i);
        visited[i] = true;
 
        while (!q.empty()) {
            int cur = q.front();
            q.pop();
 
            for (auto next : graph[cur]) {
                int nextNode = next.first;
                int offset = next.second;
 
                if (visited[nextNode]) {
                    if (position[nextNode] - position[cur] != offset) {
                        cout << "No" << endl;
                        return 0;
                    }
                }
                else {
                    position[nextNode] = position[cur] + offset;
                    visited[nextNode] = true;
                    q.push(nextNode);
                }
            }
        }
    }
 
    cout << "Yes" << endl;
 
    return 0;
}