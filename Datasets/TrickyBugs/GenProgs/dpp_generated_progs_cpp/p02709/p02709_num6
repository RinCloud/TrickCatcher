#include <iostream>
#include <algorithm>
#include <vector>

typedef long long ll;

int main() {
    int N;
    std::cin >> N;
    
    std::vector<ll> A(N);
    for (int i = 0; i < N; i++) {
        std::cin >> A[i];
    }

    std::sort(A.begin(), A.end(), std::greater<ll>());

    std::vector<ll> dp(N, 0);
    dp[0] = 0;
    dp[1] = A[0] * (N - 2) + A[1];
    for (int i = 2; i < N; i++) {
        dp[i] = dp[i-1] - A[i-2] * (N - i) + A[i-1] * (N - i + 1) + A[i];
    }

    std::cout << dp[N-1] << std::endl;

    return 0;
}