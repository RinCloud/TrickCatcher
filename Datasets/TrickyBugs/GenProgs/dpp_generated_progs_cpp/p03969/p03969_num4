#include <iostream>
#include <vector>
#include <cstring>

using namespace std;
const int MOD = 1000000007;

int modPow(int base, int exp) {
    int result = 1;
    while (exp > 0) {
        if (exp & 1) {
            result = (result * base) % MOD;
        }
        base = (base * base) % MOD;
        exp >>= 1;
    }
    return result;
}

int main() {
    int N, M, K;
    cin >> N >> M >> K;

    vector<vector<int>> graph(N + 1);
    for (int i = 0; i < M; i++) {
        int a, b;
        cin >> a >> b;
        graph[a].push_back(b);
        graph[b].push_back(a);
    }

    vector<vector<int>> dp(N + 1, vector<int>(K + 1));
    vector<bool> visited(N + 1, false);

    for (int i = 1; i <= N; i++) {
        if (!visited[i]) {
            dp[i][1] = 1;
            visited[i] = true;
            vector<int> stack;
            stack.push_back(i);

            while (!stack.empty()) {
                int node = stack.back();
                stack.pop_back();

                for (auto neighbor : graph[node]) {
                    if (!visited[neighbor]) {
                        stack.push_back(neighbor);
                        visited[neighbor] = true;
                        dp[neighbor][1] = 1;
                        for (int j = 2; j <= K; j++) {
                            dp[neighbor][j] = dp[node][j - 1];
                        }
                    }
                }
            }
        }
    }

    int ans = 0;
    for (int i = 1; i <= N; i++) {
        for (int j = 1; j <= K; j++) {
            ans = (ans + dp[i][j]) % MOD;
        }
    }

    int num_cycles = modPow(K, ans);
    cout << num_cycles << endl;

    return 0;
}