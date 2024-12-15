#include <iostream>
#include <vector>
#include <cmath>
using namespace std;

const int MAXN = 50005;

vector<int> graph[MAXN];

vector<int> edges[MAXN];
vector<int> multiplicities[MAXN];

vector<int> dist[MAXN];
vector<int> ways[MAXN];

int MOD;

int dfs(int v, int par, int e, int mult) {
    dist[v][e] = 0;
    ways[v][e] = mult;
    for (int i = 0; i < graph[v].size(); i++) {
        if (graph[v][i] != par) {
            int to = graph[v][i];
            int ne = edges[v][i];
            int nm = multiplicities[v][i];
            dist[v][e] = ((long long)dist[v][e] + dfs(to, v, ne, ((long long)mult * nm) % MOD)) % MOD;
            ways[v][e] = ((long long)ways[v][e] + ways[to][ne]) % MOD;
        }
    }
    return dist[v][e];
}

int main() {
    int N, M, Q;
    cin >> N >> M >> Q >> MOD;
    for (int i = 0; i < M; i++) {
        int A, B, C;
        cin >> A >> B >> C;
        A--; B--;
        graph[A].push_back(B);
        graph[B].push_back(A);
        edges[A].push_back(i);
        edges[B].push_back(i);
        multiplicities[A].push_back(C);
        multiplicities[B].push_back(C);
    }
    for (int i = 0; i < N; i++) {
        dist[i].resize(graph[i].size());
        ways[i].resize(graph[i].size());
    }
    for (int i = 0; i < N; i++) {
        for (int j = 0; j < graph[i].size(); j++) {
            dfs(i, -1, j, 1);
        }
    }
    for (int i = 0; i < Q; i++) {
        int S, T, R;
        cin >> S >> T >> R;
        S--; T--;
        int ans = 0;
        for (int j = 0; j < graph[S].size(); j++) {
            if (graph[S][j] == T) {
                ans = (int)(((long long)ways[S][j] * pow(R, j, MOD)) % MOD);
                break;
            }
        }
        if (ans > 0) {
            cout << "YES" << endl;
        } else {
            cout << "NO" << endl;
        }
    }
    return 0;
}