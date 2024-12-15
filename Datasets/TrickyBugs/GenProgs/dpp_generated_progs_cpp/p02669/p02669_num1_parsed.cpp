#include <iostream>
#include <vector>
#include <queue>
#include <climits>
using namespace std;

long long minCoinsToReachN(long long N, long long A, long long B, long long C, long long D) {
    vector<long long> dp(N + 1, LLONG_MAX);
    dp[0] = 0;
    
    for (long long i = 1; i <= N; i++) {
        dp[i] = dp[i - 1] + D;
        if (i % 2 == 0) dp[i] = min(dp[i], dp[i / 2] + A);
        if (i % 3 == 0) dp[i] = min(dp[i], dp[i / 3] + B);
        if (i % 5 == 0) dp[i] = min(dp[i], dp[i / 5] + C);
    }
    
    return dp[N];
}

int main() {
    int T;
    cin >> T;
    
    while (T--) {
        long long N, A, B, C, D;
        cin >> N >> A >> B >> C >> D;
        
        long long result = minCoinsToReachN(N, A, B, C, D);
        cout << result << endl;
    }
    
    return 0;
}