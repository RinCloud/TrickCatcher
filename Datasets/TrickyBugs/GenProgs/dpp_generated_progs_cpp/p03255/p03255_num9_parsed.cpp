#include <iostream>
#include <vector>
#include <algorithm>
#include <cmath>
using namespace std;

int main() {
    int N, X;
    cin >> N >> X;
    vector<int> x(N);
    for (int i = 0; i < N; i++) {
        cin >> x[i];
    }
    
    vector<long long> dp(N+1); // dp[i]: the minimum amount of energy required to put first i pieces of trash in the trash bin
    dp[0] = 0;
    
    for (int i = 1; i <= N; i++) {
        dp[i] = dp[i-1] + X; // The energy required to pick up the i-th trash or put all the trashes in the trash bin
        
        for (int j = i-2; j >= 0; j--) {
            dp[i] = min(dp[i], dp[j] + (long long)X * (x[i-1] - x[j] + 1) * (x[i-1] - x[j] + 1));
        }
    }
    
    cout << dp[N] << endl;
    
    return 0;
}