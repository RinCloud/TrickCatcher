#include <iostream>
#include <vector>
#include <queue>
using namespace std;

const int MAXN = 1e5 + 5;
vector<int> adj[MAXN];
int A[MAXN], B[MAXN], W[MAXN];
bool visited[MAXN];

bool check(int s, int W_min) {
    queue<int> q;
    q.push(s);
    visited[s] = true;

    while (!q.empty()) {
        int u = q.front();
        q.pop();

        if (W[u] < A[u]) {
            W[u] = A[u];
        }

        for (int v : adj[u]) {
            if (!visited[v]) {
                visited[v] = true;
                W[v] = B[v];
                q.push(v);
            }
        }
    }

    for (int i = 1; i <= N; i++) {
        if (W[i] < A[i]) {
            return false;
        }
    }

    return true;
}

int main() {
    int N, M;
    cin >> N >> M;

    for (int i = 1; i <= N; i++) {
        cin >> A[i] >> B[i];
        W[i] = B[i];
    }

    for (int i = 0; i < M; i++) {
        int U, V;
        cin >> U >> V;
        adj[U].push_back(V);
        adj[V].push_back(U);
    }

    int ans = 0;

    for (int i = 1; i <= N; i++) {
        if (!visited[i]) {
            int W_min = A[i];
            if (check(i, W_min)) {
                ans += W_min;
            } else {
                ans += W[i];
            }
        }
    }

    cout << ans << endl;

    return 0;
}