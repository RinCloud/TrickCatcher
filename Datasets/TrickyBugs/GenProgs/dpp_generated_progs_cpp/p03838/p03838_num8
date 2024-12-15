#include <iostream>
#include <cmath>

int main() {
    int x, y;
    std::cin >> x >> y;

    int count = 0;
    bool isNegativeX = (x < 0);
    bool isNegativeY = (y < 0);
    
    // Change the sign of x if needed
    if (isNegativeX != isNegativeY) {
        x = -x;
        count++;
    }
    
    // Increment x until it reaches y
    count += std::abs(y - x);
    
    std::cout << count << std::endl;
    
    return 0;
}