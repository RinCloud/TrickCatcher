#include <iostream>

int main() {
    int K, X;
    std::cin >> K >> X;
    
    int total = K * 500;
    
    if (total >= X) {
        std::cout << "Yes" << std::endl;
    } else {
        std::cout << "No" << std::endl;
    }
    
    return 0;
}