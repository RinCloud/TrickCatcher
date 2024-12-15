#include <iostream>

int main() {
    int X, A, B;
    std::cin >> X >> A >> B;
    
    if (B <= A) {
        std::cout << "delicious" << std::endl;
    } else if (B - A <= X) {
        std::cout << "safe" << std::endl;
    } else {
        std::cout << "dangerous" << std::endl;
    }

    return 0;
}