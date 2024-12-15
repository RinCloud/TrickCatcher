#include <iostream>

int main() {
    int A, B, C, D;
    std::cin >> A >> B >> C >> D;
    
    while (true) {
        C -= B;
        if (C <= 0) {
            std::cout << "Yes" << std::endl;
            break;
        }
        
        A -= D;
        if (A <= 0) {
            std::cout << "No" << std::endl;
            break;
        }
    }
    
    return 0;
}