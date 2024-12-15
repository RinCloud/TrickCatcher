#include <iostream>
#include <cmath>

int main() {
    long long N, K;
    std::cin >> N >> K;
    
    long long minVal = N % K;
    minVal = std::min(minVal, std::abs(minVal - K));
    
    std::cout << minVal << std::endl;
    
    return 0;
}