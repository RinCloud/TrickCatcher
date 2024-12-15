#include <iostream>
#include <algorithm>

int main() {
    int N, K;
    std::cin >> N >> K;
    
    int min_diff = 0;
    if (N % K != 0) {
        min_diff = 1;
    }
    
    std::cout << min_diff << std::endl;
    
    return 0;
}