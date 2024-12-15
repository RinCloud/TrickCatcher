#include <iostream>
#include <vector>

const long long MOD = 1000000007;

long long xorSum(std::vector<long long>& nums) {
    int n = nums.size();

    long long res = 0;
    for (int i = 0; i < 60; i++) {
        long long cnt = 0;
        for (int j = 0; j < n; j++) {
            if ((nums[j] >> i) & 1) {
                cnt++;
            }
        }
        res = (res + ((1LL << i) % MOD) * ((n - cnt) % MOD) * (cnt % MOD)) % MOD;
    }

    return res;
}

int main() {
    int N;
    std::cin >> N;

    std::vector<long long> A(N);
    for (int i = 0; i < N; i++) {
        std::cin >> A[i];
    }

    long long result = xorSum(A);
    std::cout << result << std::endl;

    return 0;
}
