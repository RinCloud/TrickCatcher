#include <iostream>
#include <vector>
#include <cmath>
#include <algorithm>
using namespace std;

int main() {
    int N, X;
    cin >> N >> X;
    vector<long long> x(N);
    for (int i = 0; i < N; i++) {
        cin >> x[i];
    }
    
    vector<long long> dp(N);
    dp[0] = X * x[0];
    for (int i = 1; i < N; i++) {
        dp[i] = min(X * x[i], dp[i - 1] + X * max(2 * (x[i] - x[i - 1]), (long long)pow(x[i] - x[i - 1], 2)));
    }
    
    cout << dp[N - 1] << endl;
    
    return 0;
}