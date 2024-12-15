#include <iostream>
#include <cmath>

int main() {
    int N;
    std::cin >> N;
    
    int min_digits = std::log10(N) + 1;
    
    for (int A = 1; A <= std::sqrt(N); A++) {
        if (N % A == 0) {
            int B = N / A;
            int digits = std::max(std::log10(A) + 1, std::log10(B) + 1);
            min_digits = std::min(min_digits, digits);
        }
    }
    
    std::cout << min_digits << std::endl;
    
    return 0;
}