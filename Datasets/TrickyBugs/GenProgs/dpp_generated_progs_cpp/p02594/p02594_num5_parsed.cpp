#include <iostream>

int main() {
    int temperature;
    std::cin >> temperature;
    
    if (temperature >= 30) {
        std::cout << "Yes" << std::endl;
    } else {
        std::cout << "No" << std::endl;
    }
    
    return 0;
}