#include <iostream>
#include <vector>
#include <cmath>

using namespace std;

int main() {
    int N, X;
    cin >> N >> X;
    
    vector<int> x(N);
    for (int i = 0; i < N; i++) {
        cin >> x[i];
    }
    
    vector<long long> dp(N);
    dp[0] = X * x[0];
    for (int i = 1; i < N; i++) {
        dp[i] = dp[i-1] + X * (x[i] - x[i-1]);
        for (int j = 1; j <= i; j++) {
            long long prev = dp[j-1] + X * (x[i] - x[j-1]);
            dp[i] = min(dp[i], prev + (i-j+1)*(i-j+1)*X);
        }
    }
    
    cout << dp[N-1] << endl;
    
    return 0;
}