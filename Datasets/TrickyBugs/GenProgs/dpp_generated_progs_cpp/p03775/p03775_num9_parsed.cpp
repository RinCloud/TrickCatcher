#include <iostream>
#include <cmath>

int main() {
    long long N;
    std::cin >> N;
    
    int min_digits = INT_MAX;
    for (long long i = 1; i <= sqrt(N); i++) {
        if (N % i == 0) {
            long long factor = N / i;
            int digits = std::max(static_cast<int>(log10(i)) + 1, static_cast<int>(log10(factor)) + 1);
            min_digits = std::min(min_digits, digits);
        }
    }
    
    std::cout << min_digits << std::endl;
    
    return 0;
}