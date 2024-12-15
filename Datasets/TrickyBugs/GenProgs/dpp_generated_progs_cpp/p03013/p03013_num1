#include <iostream>
#include <vector>
#include <algorithm>

using namespace std;

const int MOD = 1000000007;

int main() {
    int N, M;
    cin >> N >> M;
    
    vector<int> broken_steps(M);
    for (int i = 0; i < M; i++) {
        cin >> broken_steps[i];
    }
    sort(broken_steps.begin(), broken_steps.end());
    
    vector<long long> dp(N + 1, 0);
    dp[0] = 1;
    
    for (int i = 0; i <= N; i++) {
        if (i < N && binary_search(broken_steps.begin(), broken_steps.end(), i)) {
            continue;
        }
        
        if (i + 1 <= N) {
            dp[i + 1] += dp[i];
            dp[i + 1] %= MOD;
        }
        
        if (i + 2 <= N) {
            dp[i + 2] += dp[i];
            dp[i + 2] %= MOD;
        }
    }
    
    cout << dp[N] << endl;
    
    return 0;
}