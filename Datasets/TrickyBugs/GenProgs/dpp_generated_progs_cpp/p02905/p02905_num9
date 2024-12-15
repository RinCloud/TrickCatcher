#include <iostream>
#include <vector>
#include <algorithm>

const int MOD = 998244353;

int gcd(int a, int b) {
    if (b == 0) {
        return a;
    }
    return gcd(b, a % b);
}

int lcm(int a, int b) {
    return (a / gcd(a, b)) * b;
}

int main() {
    int N;
    std::cin >> N;

    std::vector<int> A(N);
    for (int i = 0; i < N; i++) {
        std::cin >> A[i];
    }

    long long sum = 0;

    for (int i = 0; i < N - 1; i++) {
        for (int j = i + 1; j < N; j++) {
            int partial_lcm = lcm(A[i], A[j]);
            sum = (sum + partial_lcm) % MOD;
        }
    }

    std::cout << sum << std::endl;

    return 0;
}