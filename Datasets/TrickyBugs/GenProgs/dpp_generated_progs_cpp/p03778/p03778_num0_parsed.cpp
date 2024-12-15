#include <iostream>
#include <cmath>

int main() {
    int W, a, b;
    std::cin >> W >> a >> b;
    
    int distance = std::abs(b - a - W);
    std::cout << distance << std::endl;
    
    return 0;
}