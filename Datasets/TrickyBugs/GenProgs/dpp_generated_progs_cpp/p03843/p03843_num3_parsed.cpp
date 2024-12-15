#include <iostream>
#include <vector>
#include <queue>
using namespace std;

vector<int> tree[200005];
int color[200005];
int black_count[200005];
int ans[200005];

void bfs(int v, int d) {
    queue<pair<int, int>> q;
    q.push({v, 0});
    vector<bool> visited(200005, false);
    visited[v] = true;

    while (!q.empty()) {
        int u = q.front().first;
        int dist = q.front().second;
        q.pop();
        if (dist > d) break;
        black_count[u]++;
        for (int i = 0; i < tree[u].size(); i++) {
            int nxt = tree[u][i];
            if (!visited[nxt]) {
                visited[nxt] = true;
                q.push({nxt, dist + 1});
            }
        }
    }
}

int main() {
    int N;
    cin >> N;
    
    for (int i = 0; i < N - 1; i++) {
        int a, b;
        cin >> a >> b;
        tree[a].push_back(b);
        tree[b].push_back(a);
    }
    
    string s;
    cin >> s;
    
    for (int i = 0; i < N; i++) {
        color[i + 1] = s[i] - '0';
    }
    
    int sum = 0;
    for (int i = 1; i <= N; i++) {
        sum += color[i];
    }
    
    int v = 0;
    for (int i = 1; i <= N; i++) {
        if (color[i]) {
            v = i;
            break;
        }
    }
    
    bfs(v, 0);
    
    for (int i = 1; i <= N; i++) {
        ans[i] = N - black_count[i];
    }
    
    cout << ans[1];
    for (int i = 2; i <= N; i++) {
        cout << " " << ans[i];
    }
    cout << endl;
    
    return 0;
}