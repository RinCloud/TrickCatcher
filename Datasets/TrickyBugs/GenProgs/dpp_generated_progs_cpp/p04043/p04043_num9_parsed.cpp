#include <iostream>

int main() {
    int A, B, C;
    std::cin >> A >> B >> C;
    
    if (A == 5 && B == 7 && C == 5) {
        std::cout << "YES" << std::endl;
    } else {
        std::cout << "NO" << std::endl;
    }
    
    return 0;
}