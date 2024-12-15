#include <iostream>
#include <vector>

const int MOD = 1e9 + 7;

long long calculateXORSum(const std::vector<long long>& nums) {
    int n = nums.size();
    long long sum = 0;
    for (int i = 0; i < 60; i++) {
        long long countOnes = 0;
        for (int j = 0; j < n; j++) {
            if ((nums[j] & (1LL << i)) != 0) {
                countOnes++;
            }
        }
        long long countZeros = n - countOnes;
        sum = (sum + (((countOnes * countZeros) % MOD) * (1LL << i)) % MOD) % MOD;
    }
    return sum;
}

int main() {
    int N;
    std::cin >> N;
    std::vector<long long> A(N);
    for (int i = 0; i < N; i++) {
        std::cin >> A[i];
    }
    long long result = calculateXORSum(A);
    std::cout << result << std::endl;
    return 0;
}