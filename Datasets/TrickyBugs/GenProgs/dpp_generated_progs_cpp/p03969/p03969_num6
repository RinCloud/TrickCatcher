#include <iostream>
#include <vector>
using namespace std;

const int MOD = 1000000007;

int main() {
    int N, M, K;
    cin >> N >> M >> K;
    
    vector<vector<int>> adjList(N+1);
    for (int i = 0; i < M; i++) {
        int a, b;
        cin >> a >> b;
        adjList[a].push_back(b);
        adjList[b].push_back(a);
    }
    
    vector<vector<long long>> dp(N+1, vector<long long>(K+1, 0));
    vector<vector<long long>> temp(N+1, vector<long long>(K+1, 0));
    dp[1][0] = 1;
    
    for (int i = 1; i <= N; i++) {
        for (int j = 0; j <= K; j++) {
            for (int v : adjList[i]) {
                for (int k = 0; k <= min(j, K-j); k++) {
                    temp[v][k] = (temp[v][k] + dp[i][j]) % MOD;
                }
            }
        }
        for (int j = 0; j <= K; j++) {
            dp[i+1][j] = dp[i][j];
            for (int v : adjList[i]) {
                dp[i+1][j] = (dp[i+1][j] + temp[v][j]) % MOD;
            }
        }
        for (int v : adjList[i]) {
            for (int k = 0; k <= K; k++) {
                temp[v][k] = 0;
            }
        }
    }
    
    long long ans = 0;
    for (int j = 0; j <= K; j++) {
        ans = (ans + dp[N][j]) % MOD;
    }
    cout << ans << endl;
    
    return 0;
}