#include <iostream>
#include <vector>
#include <algorithm>

int main() {
    int N;
    std::cin >> N;
    
    std::vector<int> A(N);
    for (int i = 0; i < N; i++) {
        std::cin >> A[i];
    }
    
    std::vector<long long> dp(N);
    dp[0] = A[0];
    dp[1] = std::max(A[0], A[1]);
    
    for (int i = 2; i < N; i++) {
        dp[i] = std::max(dp[i-2] + A[i], dp[i-1]);
    }
    
    std::cout << dp[N-1] << std::endl;
    
    return 0;
}