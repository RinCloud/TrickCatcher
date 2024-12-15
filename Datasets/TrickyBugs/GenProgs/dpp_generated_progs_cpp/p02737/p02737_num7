#include <iostream>
#include <vector>
#include <unordered_set>

using namespace std;

const long long MOD = 998244353;
const long long BASE = 1000000000000000000;

vector<vector<int>> X, Y, Z;
vector<vector<int>> W;
vector<long long> weight;

void add_edge(int u, int v) {
    W[u].push_back(v);
    W[v].push_back(u);
}

long long pow_mod(long long base, int exponent) {
    long long result = 1;
    while(exponent > 0) {
        if(exponent % 2 == 1) {
            result = (result * base) % MOD;
        }
        base = (base * base) % MOD;
        exponent /= 2;
    }
    return result;
}

void dfs(int u, int p, long long w) {
    weight[u] = w;
    for(int v : W[u]) {
        if(v != p) {
            dfs(v, u, w);
        }
    }
}

int main() {
    int N;
    cin >> N;
    
    X.resize(N);
    Y.resize(N);
    Z.resize(N);
    
    int M1, M2, M3;
    cin >> M1;
    for(int i = 0; i < M1; i++) {
        int u, v;
        cin >> u >> v;
        u--; v--;
        X[u].push_back(v);
        X[v].push_back(u);
    }
    
    cin >> M2;
    for(int i = 0; i < M2; i++) {
        int u, v;
        cin >> u >> v;
        u--; v--;
        Y[u].push_back(v);
        Y[v].push_back(u);
    }
    
    cin >> M3;
    for(int i = 0; i < M3; i++) {
        int u, v;
        cin >> u >> v;
        u--; v--;
        Z[u].push_back(v);
        Z[v].push_back(u);
    }
    
    W.resize(N*N*N);
    weight.resize(N*N*N);
    
    for(int u = 0; u < N; u++) {
        for(int v = 0; v < N; v++) {
            for(int w = 0; w < N; w++) {
                int uv = u * N + v;
                int uw = u * N + w;
                int vw = v * N + w;
                add_edge(uv, uw);
                add_edge(uv, vw);
                add_edge(uw, vw);
            }
        }
    }
    
    dfs(0, -1, 1);
    
    long long ans = 0;
    for(int i = 0; i < N; i++) {
        for(int j = 0; j < N; j++) {
            for(int k = 0; k < N; k++) {
                int u = i * N * N + j * N + k;
                ans = (ans + weight[u]) % MOD;
            }
        }
    }
    
    cout << ans << endl;
    
    return 0;
}