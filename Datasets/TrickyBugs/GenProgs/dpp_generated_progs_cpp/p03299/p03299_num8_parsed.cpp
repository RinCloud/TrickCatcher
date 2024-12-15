#include <iostream>
#include <vector>
using namespace std;

const int MOD = 1000000007;

int main() {
    int N;
    cin >> N;
    
    vector<int> h(N);
    for (int i = 0; i < N; i++) {
        cin >> h[i];
    }
    
    vector<vector<long long>> dp(N, vector<long long>(2, 0));
    dp[0][0] = h[0] + 1;
    dp[0][1] = 1;
    
    for (int i = 1; i < N; i++) {
        dp[i][0] = (dp[i-1][0] + dp[i-1][1]) * (h[i] + 1) % MOD;
        dp[i][1] = dp[i-1][0];
    }
    
    cout << (dp[N-1][0] + dp[N-1][1]) % MOD << endl;
    
    return 0;
}