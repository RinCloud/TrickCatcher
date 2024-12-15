#include <iostream>
#include <vector>

const long long MOD = 1000000007;

int main() {
    int N;
    std::cin >> N;
    
    std::vector<int> A(N);
    std::vector<int> B(N);
    for (int i = 0; i < N; ++i) {
        std::cin >> A[i] >> B[i];
    }
    
    long long totalWays = 0;
    for (int i = 0; i < N; ++i) {
        for (int j = i+1; j < N; ++j) {
            // Calculate the number of ways to make a Skewer Meal using the i-th and j-th packs
            long long ways = ((A[i] + B[i]) % MOD) * ((A[j] + B[j]) % MOD) % MOD;
            totalWays = (totalWays + ways) % MOD;
        }
    }
    
    std::cout << totalWays << std::endl;
    
    return 0;
}