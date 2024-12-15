#include <iostream>
#include <cmath>

int main() {
    long long N, K;
    std::cin >> N >> K;
    
    // If K is 1, the minimum value will be 0
    if (K == 1) {
        std::cout << "0" << std::endl;
        return 0;
    }
    
    // Calculate the remainder of N when divided by K
    long long remainder = N % K;

    // Find the minimum value after Aoki does the operation zero or more times
    long long result = std::min(remainder, std::abs(K - remainder));
    
    std::cout << result << std::endl;
    
    return 0;
}