#include <iostream>
#include <vector>
#include <queue>
#include <algorithm>
using namespace std;
 
typedef long long ll;
 
// Global constants
const int MAXN = 50005;
const int MAXM = 50005;
const int MAXQ = 50005;
 
// Global variables
int N, M, Q, MOD;
int A[MAXM], B[MAXM], C[MAXM];
int S[MAXQ], T[MAXQ], R[MAXQ];
vector<int> adj[MAXN];
 
// Variables for BFS
queue<int> q;
int dist[MAXN];
 
// Variables for DP
ll dp[2][MAXN];
 
// Function for BFS
void bfs()
{
    fill(dist, dist+N+1, -1);
 
    dist[T[0]] = 0;
    q.push(T[0]);
 
    while (!q.empty()) {
        int u = q.front();
        q.pop();
 
        for (int v : adj[u]) {
            if (dist[v] == -1) {
                dist[v] = dist[u] + 1;
                q.push(v);
            }
        }
    }
}
 
// Function to solve each query
bool solve_query()
{
    // Calculate distance and DP table
    bfs();
    fill(dp[0], dp[0]+N+1, 0);
 
    int cur = 0;
    dp[0][S[0]] = 1;
 
    for (int i = 1; i <= dist[S[0]]; i++) {
        fill(dp[cur^1], dp[cur^1]+N+1, 0);
        cur ^= 1;
 
        for (int u = 1; u <= N; u++)
            for (int v : adj[u])
                if (dist[v] == dist[u] - 1)
                    dp[cur^1][v] = (dp[cur^1][v] + dp[cur][u]) % MOD;
    }
 
    // Check if there is a path with length R
    if (dist[S[0]] >= R[0]) {
        int len = R[0];
 
        for (int i = 1; i <= dist[S[0]]; i++) {
            if (len & 1)
                dp[cur][S[0]] += dp[cur][i];
            len >>= 1;
        }
    }
 
    return dp[cur][S[0]] > 0;
}
 
int main()
{
    cin >> N >> M >> Q >> MOD;
 
    // Read the graph
    for (int i = 0; i < M; i++) {
        cin >> A[i] >> B[i] >> C[i];
        adj[A[i]].push_back(B[i]);
        adj[B[i]].push_back(A[i]);
    }
 
    // Process each query
    for (int i = 0; i < Q; i++) {
        cin >> S[i] >> T[i] >> R[i];
        cout << (solve_query() ? "YES" : "NO") << endl;
    }
 
    return 0;
}