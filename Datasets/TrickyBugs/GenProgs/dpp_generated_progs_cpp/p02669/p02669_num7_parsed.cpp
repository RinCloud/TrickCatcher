#include <iostream>
#include <vector>

using namespace std;

long long int getMinCoins(long long int N, long long int A, long long int B, long long int C, long long int D) {
    vector<long long int> dp(N+1, INT_MAX);
    dp[0] = 0;

    for(long long int i=1; i<=N; i++) {
        dp[i] = min(dp[i], dp[i-1] + D);
        if(i%2 == 0) dp[i] = min(dp[i], dp[i/2] + A);
        if(i%3 == 0) dp[i] = min(dp[i], dp[i/3] + B);
        if(i%5 == 0) dp[i] = min(dp[i], dp[i/5] + C);
    }

    return dp[N];
}

int main() {
    long long int T;
    cin >> T;

    while(T--) {
        long long int N, A, B, C, D;
        cin >> N >> A >> B >> C >> D;

        long long int minCoins = getMinCoins(N, A, B, C, D);
        cout << minCoins << endl;
    }

    return 0;
}