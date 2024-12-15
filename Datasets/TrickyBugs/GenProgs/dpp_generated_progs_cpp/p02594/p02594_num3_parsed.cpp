#include <iostream>

int main() {
    int temperature;
    std::cin >> temperature;
    
    if (temperature >= 30) {
        std::cout << "Yes";
    } else {
        std::cout << "No";
    }
    
    return 0;
}