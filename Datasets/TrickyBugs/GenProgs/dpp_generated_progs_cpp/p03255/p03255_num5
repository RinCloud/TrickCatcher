#include <iostream>
#include <vector>
#include <cmath>
using namespace std;

int main() {
    long long int N, X;
    cin >> N >> X;
    vector<long long int> x(N);
    for (int i = 0; i < N; i++) {
        cin >> x[i];
    }

    vector<long long int> dp(N+1);
    for (int i = 1; i <= N; i++) {
        dp[i] = dp[i-1] + X;
        for (int j = 2; j <= i; j++) {
            long long int c = X * (j-1) + (x[i-1]-x[i-j])*(x[i-1]-x[i-j]) + dp[i-j];
            dp[i] = min(dp[i], c);
        }
    }

    cout << dp[N] << endl;

    return 0;
}