#include <iostream>
#include <vector>
#include <algorithm>

std::string findLongestSubsequence(int N, int K, std::vector<std::string> strings) {
    std::string longest; // store the longest subsequence
    std::vector<std::vector<int>> dp(K, std::vector<int>(1 << N, 0));
    std::vector<std::vector<std::string>> substring(K, std::vector<std::string>(1 << N, ""));
    
    for (int i = 0; i < K; i++) {
        dp[i][0] = 1; // initialize the first character as 1
        substring[i][0] = "1";
    }
    
    for (int i = 1; i <= N; i++) {
        for (int j = 0; j < (1 << i); j++) {
            for (int k = K - 1; k >= 0; k--) {
                if (k < dp.size()) {
                    if (strings[i][j] == '1') {
                        dp[k][j] = dp[k][j - 1] + dp[k - 1][j - 1];
                        substring[k][j] = substring[k][j - 1] + substring[k - 1][j - 1] + '1';
                    } else {
                        dp[k][j] = dp[k][j - 1];
                        substring[k][j] = substring[k][j - 1];
                    }
                }
                
                if (dp[k][j] >= K && (longest.empty() || substring[k][j] < longest)) {
                    longest = substring[k][j];
                }
            }
        }
    }
    
    return longest;
}

int main() {
    int N, K;
    std::cin >> N >> K;
    
    std::vector<std::string> strings(N + 1);
    for (int i = 0; i <= N; i++) {
        std::cin >> strings[i];
    }
    
    std::string longestSubsequence = findLongestSubsequence(N, K, strings);
    
    std::cout << longestSubsequence << std::endl;
    
    return 0;
}