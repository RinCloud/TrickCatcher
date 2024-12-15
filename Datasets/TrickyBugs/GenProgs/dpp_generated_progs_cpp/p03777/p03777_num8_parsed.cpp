#include <iostream>

int main() {
    char a, b;
    std::cin >> a >> b;
    
    if (a == 'H' && b == 'H') {
        std::cout << "H";
    } else {
        std::cout << "D";
    }
    
    return 0;
}