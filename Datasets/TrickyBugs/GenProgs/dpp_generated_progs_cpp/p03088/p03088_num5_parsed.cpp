#include <iostream>
#include <vector>

const int MOD = 1000000007;

int countStrings(int n) {
    std::vector<std::vector<std::vector<std::vector<long long>>>> dp(n+1, std::vector<std::vector<std::vector<long long>>>(4, std::vector<std::vector<long long>>(4, std::vector<long long>(4, 0))));
    
    dp[0][3][3][3] = 1;
    
    for (int len = 0; len < n; len++) {
        for (int c1 = 0; c1 < 4; c1++) {
            for (int c2 = 0; c2 < 4; c2++) {
                for (int c3 = 0; c3 < 4; c3++) {
                    for (int c4 = 0; c4 < 4; c4++) {
                        if (c2 == 0 && c3 == 2 && c4 == 1) continue; // AGC
                        if (c2 == 0 && c3 == 1 && c4 == 2) continue; // ACG
                        if (c2 == 1 && c3 == 0 && c4 == 2) continue; // GAC
                        if (c1 == 0 && c3 == 2 && c4 == 1) continue; // A_GC
                        if (c1 == 0 && c2 == 2 && c4 == 1) continue; // AG_C
                        
                        dp[len+1][c2][c3][c4] += dp[len][c1][c2][c3];
                        dp[len+1][c2][c3][c4] %= MOD;
                    }
                }
            }
        }
    }
    
    long long totalCount = 0;
    for (int c1 = 0; c1 < 4; c1++) {
        for (int c2 = 0; c2 < 4; c2++) {
            for (int c3 = 0; c3 < 4; c3++) {
                totalCount += dp[n][c1][c2][c3];
                totalCount %= MOD;
            }
        }
    }
    
    return totalCount;
}

int main() {
    int N;
    std::cin >> N;
    
    int result = countStrings(N);
    
    std::cout << result << std::endl;
    
    return 0;
}