#include <iostream>
#include <cmath>

int main() {
    int r;
    std::cin >> r;
    
    double area = 3 * pow(r, 2);
    int rounded_area = static_cast<int>(area);
    
    std::cout << rounded_area << std::endl;
    
    return 0;
}