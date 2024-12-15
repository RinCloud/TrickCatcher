#include <iostream>
#include <string>

int main() {
    int a, b;
    std::cin >> a >> b;
    
    std::string str_a = std::string(b, static_cast<char>(a + '0'));
    std::string str_b = std::string(a, static_cast<char>(b + '0'));
    
    if (str_a <= str_b) {
        std::cout << str_a << "\n";
    } else {
        std::cout << str_b << "\n";
    }
    
    return 0;
}