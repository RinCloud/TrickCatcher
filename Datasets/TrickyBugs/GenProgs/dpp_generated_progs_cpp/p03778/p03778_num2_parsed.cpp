#include <iostream>
#include <cmath>

int main() {
    int W, a, b;
    std::cin >> W >> a >> b;

    int distance = 0;
    
    if (a <= b && b <= a + W) {
        distance = b - (a + W);
    } else if (b <= a && a <= b + W) {
        distance = a - (b + W);
    } else {
        distance = std::min(abs(a - (b + W)), abs(b - (a + W)));
    }
    
    std::cout << std::max(distance, 0) << std::endl;

    return 0;
}