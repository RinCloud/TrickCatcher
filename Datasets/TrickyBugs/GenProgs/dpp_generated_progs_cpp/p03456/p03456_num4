#include <iostream>
#include <cmath>
#include <string>

bool isSquare(int n) {
    int root = sqrt(n);
    return (root * root == n);
}

int main() {
    int a, b;
    std::cin >> a >> b;
    
    std::string concat = std::to_string(a) + std::to_string(b);
    int num = std::stoi(concat);
    
    if (isSquare(num)) {
        std::cout << "Yes" << std::endl;
    } else {
        std::cout << "No" << std::endl;
    }
    
    return 0;
}