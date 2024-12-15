#include <iostream>
#include <string>
#include <algorithm>

int main() {
    int a, b;
    std::cin >> a >> b;
    
    std::string str1(a, '0' + b);
    std::string str2(b, '0' + a);
    
    std::cout << std::min(str1, str2) << std::endl;
    
    return 0;
}