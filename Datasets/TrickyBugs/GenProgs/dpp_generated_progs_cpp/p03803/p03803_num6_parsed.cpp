#include <iostream>

int main() {
    int A, B;
    std::cin >> A >> B;
    
    if (A == B) {
        std::cout << "Draw";
    } else if (A == 1) {
        std::cout << "Alice";
    } else if (B == 1) {
        std::cout << "Bob";
    } else if (A > B) {
        std::cout << "Alice";
    } else {
        std::cout << "Bob";
    }
    
    return 0;
}