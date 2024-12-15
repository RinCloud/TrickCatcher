#include <iostream>
#include <string>

int main() {
    int a, b;
    std::cin >> a >> b;
    
    std::string str1(a, '0' + b);
    std::string str2(b, '0' + a);
    
    if (str1 <= str2) {
        std::cout << str1 << std::endl;
    } else {
        std::cout << str2 << std::endl;
    }
    
    return 0;
}