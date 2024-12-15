#include <iostream>
#include <cmath>

int main() {
    long long N, K;
    std::cin >> N >> K;
    
    N %= K;
    std::cout << std::min(N, K - N) << std::endl;
    
    return 0;
}