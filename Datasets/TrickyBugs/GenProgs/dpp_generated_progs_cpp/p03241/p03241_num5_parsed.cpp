#include <iostream>

long long gcd(long long a, long long b) {
    if (b == 0) return a;
    return gcd(b, a % b);
}

int main() {
    long long N, M;
    std::cin >> N >> M;

    long long gcd_max = gcd(N, M);
    std::cout << gcd_max << std::endl;

    return 0;
}
