#include <iostream>
#include <queue>
#include <vector>
#include <climits>
using namespace std;

long long getMinCoins(long long N, long long A, long long B, long long C, long long D) {
    vector<long long> dp(N + 1, LLONG_MAX);
    dp[0] = 0;
    queue<long long> q;
    q.push(0);
    
    while (!q.empty()) {
        long long num = q.front();
        q.pop();
        
        if (num == N) {
            return dp[num];
        }
        
        // Multiply by 2
        if (num * 2 <= N && dp[num] + A < dp[num * 2]) {
            dp[num * 2] = dp[num] + A;
            q.push(num * 2);
        }
        
        // Multiply by 3
        if (num * 3 <= N && dp[num] + B < dp[num * 3]) {
            dp[num * 3] = dp[num] + B;
            q.push(num * 3);
        }
        
        // Multiply by 5
        if (num * 5 <= N && dp[num] + C < dp[num * 5]) {
            dp[num * 5] = dp[num] + C;
            q.push(num * 5);
        }
        
        // Increase
        if (num + 1 <= N && dp[num] + D < dp[num + 1]) {
            dp[num + 1] = dp[num] + D;
            q.push(num + 1);
        }
        
        // Decrease
        if (num - 1 >= 0 && dp[num] + D < dp[num - 1]) {
            dp[num - 1] = dp[num] + D;
            q.push(num - 1);
        }
    }
    
    return dp[N];
}

int main() {
    int T;
    cin >> T;
    
    for (int i = 0; i < T; i++) {
        long long N, A, B, C, D;
        cin >> N >> A >> B >> C >> D;
        
        long long minCoins = getMinCoins(N, A, B, C, D);
        
        cout << minCoins << endl;
    }
    
    return 0;
}
