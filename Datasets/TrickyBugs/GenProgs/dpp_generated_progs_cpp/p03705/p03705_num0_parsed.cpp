#include <iostream>
#include <algorithm>

int main() {
    int N, A, B;
    std::cin >> N >> A >> B;
    
    if (A == B) {
        std::cout << 1 << std::endl;
    } else if (N == 1) {
        std::cout << 0 << std::endl;
    } else if (A > B) {
        std::cout << 0 << std::endl;
    } else {
        long long int min_sum = 1LL * (N - 1) * A + B;
        long long int max_sum = 1LL * (N - 1) * B + A;
        std::cout << max_sum - min_sum + 1 << std::endl;
    }
    
    return 0;
}