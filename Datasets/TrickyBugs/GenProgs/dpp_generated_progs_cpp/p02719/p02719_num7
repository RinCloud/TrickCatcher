#include <iostream>
#include <cmath>

int main() {
    long long N, K;
    std::cin >> N >> K;
    
    long long min_val = N;
    while (true) {
        long long abs_diff = std::abs(min_val - K);
        if (abs_diff >= min_val) {
            break;
        }
        min_val = abs_diff;
    }
    
    std::cout << min_val << std::endl;
    
    return 0;
}