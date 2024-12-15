#include <iostream>
#include <cmath>

int main() {
    int r;
    std::cin >> r;
    
    double a = r / std::sqrt(3);
    int area = 3 * (a * a);
    
    std::cout << area << std::endl;
    
    return 0;
}