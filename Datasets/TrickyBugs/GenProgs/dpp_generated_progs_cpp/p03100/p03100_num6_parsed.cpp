#include <iostream>
#include <vector>
#include <queue>
using namespace std;

const int MAXN = 50005;
const int MAXM = 100005;
const int MAXQ = 50005;
const int MAXMOD = 1000005;

int N, M, Q, MOD;
int A[MAXM], B[MAXM], C[MAXM];
int S[MAXQ], T[MAXQ], R[MAXQ];
vector<int> adj[MAXN];
int dist[MAXN], seen[MAXN];

void bfs(int src) {
    queue<int> q;
    q.push(src);
    dist[src] = 1;
    seen[src] = true;

    while (!q.empty()) {
        int u = q.front();
        q.pop();
        for (int v : adj[u]) {
            if (!seen[v]) {
                seen[v] = true;
                dist[v] = dist[u] + 1;
                q.push(v);
            }
        }
    }
}

bool solve_query(int src, int dest, int rem) {
    priority_queue<pair<int, int>, vector<pair<int, int>>, greater<pair<int, int>>> pq;
    pq.push({rem, src});

    while (!pq.empty()) {
        int u = pq.top().second;
        int r = pq.top().first;
        pq.pop();

        if (dist[u] < r) {
            continue;
        }

        if (u == dest && r == 0) {
            return true;
        }

        for (int v : adj[u]) {
            int new_r = (r - (1 << (dist[v]-1)) * C[v] + MOD) % MOD;
            if (dist[v] <= r && dist[v] <= new_r) {
                if (seen[v] == 0 || new_r < dist[v]) {
                    seen[v] = 1;
                    dist[v] = new_r;
                    pq.push({new_r, v});
                }
            }
        }
    }

    return false;
}

int main() {
    cin >> N >> M >> Q >> MOD;

    for (int i = 0; i < M; i++) {
        cin >> A[i] >> B[i] >> C[i];
        adj[A[i]].push_back(i);
        adj[B[i]].push_back(i);
    }

    for (int i = 0; i < Q; i++) {
        cin >> S[i] >> T[i] >> R[i];
    }

    for (int i = 1; i <= N; i++) {
        seen[i] = 0;
        dist[i] = MOD + 1;
    }

    bfs(T[0]);

    for (int i = 0; i < Q; i++) {
        cout << (solve_query(S[i], T[i], R[i]) ? "YES" : "NO") << endl;
    }

    return 0;
}