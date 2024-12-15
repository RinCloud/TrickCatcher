#include <iostream>
#include <vector>

int main() {
    int N, A;
    std::cin >> N >> A;
    
    std::vector<int> cards(N);
    for (int i = 0; i < N; i++) {
        std::cin >> cards[i];
    }
    
    // dp[i][j] represents the number of ways to select j cards
    // such that the average of the integers is exactly i
    std::vector<std::vector<long long>> dp(A + 1, std::vector<long long>(N + 1, 0));
    dp[0][0] = 1;
    
    for (int i = 1; i <= A; i++) {
        for (int j = 1; j <= N; j++) {
            dp[i][j] = dp[i][j - 1]; // not selecting the current card
            
            if (i >= cards[j - 1]) {
                dp[i][j] += dp[i - cards[j - 1]][j - 1]; // selecting the current card
            }
        }
    }
    
    std::cout << dp[A][N] << "\n";
    
    return 0;
}