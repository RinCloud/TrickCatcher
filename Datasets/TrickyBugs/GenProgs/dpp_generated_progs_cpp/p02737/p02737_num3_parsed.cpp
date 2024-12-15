#include <iostream>
#include <vector>
using namespace std;

const int MOD = 998244353;

int main() {
    int N;
    cin >> N;
    
    // Read input for X, Y, Z
    int M1, M2, M3;
    cin >> M1;
    vector<vector<int>> X(N + 1, vector<int>(N + 1, 0));
    for (int i = 0; i < M1; i++) {
        int a, b;
        cin >> a >> b;
        X[a][b] = 1;
        X[b][a] = 1;
    }
    
    cin >> M2;
    vector<vector<int>> Y(N + 1, vector<int>(N + 1, 0));
    for (int i = 0; i < M2; i++) {
        int c, d;
        cin >> c >> d;
        Y[c][d] = 1;
        Y[d][c] = 1;
    }
    
    cin >> M3;
    vector<vector<int>> Z(N + 1, vector<int>(N + 1, 0));
    for (int i = 0; i < M3; i++) {
        int e, f;
        cin >> e >> f;
        Z[e][f] = 1;
        Z[f][e] = 1;
    }
    
    // Calculate the maximum possible total weight of an independent set in W
    long long totalWeight = 0;
    for (int i = 1; i <= N; i++) {
        for (int j = 1; j <= N; j++) {
            for (int k = 1; k <= N; k++) {
                if (X[i][j] == 0 && Y[j][k] == 0 && Z[k][i] == 0) {
                    long long weight = 1;
                    for (int x = 0; x < i + j + k; x++) {
                        weight = (weight * 1000000000) % MOD;
                    }
                    totalWeight = (totalWeight + weight) % MOD;
                }
            }
        }
    }
    
    cout << totalWeight << endl;
    
    return 0;
}