#include <iostream>
#include <vector>
#include <algorithm>

const int MOD = 1000000007;

int main() {
    int N, K;
    std::cin >> N >> K;

    std::vector<long long> A(N);
    for (int i = 0; i < N; i++) {
        std::cin >> A[i];
    }

    std::sort(A.begin(), A.end());

    long long product = 1;

    if (A[N-1] <= 0 && K % 2 == 1) {
        for (int i = N - 1; i >= N - K; i--) {
            product = (product * A[i]) % MOD;
        }
    } else {
        int left = 0, right = N - 1;
        
        if (K % 2 == 1) {
            product = A[right];
            right--;
            K--;
        }

        while (K > 0) {
            long long left_product = A[left] * A[left + 1];
            long long right_product = A[right] * A[right - 1];

            if (left_product > right_product) {
                product = (product * left_product) % MOD;
                left += 2;
            } else {
                product = (product * right_product) % MOD;
                right -= 2;
            }

            K -= 2;
        }
    }

    std::cout << product << std::endl;

    return 0;
}