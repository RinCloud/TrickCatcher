#include <iostream>
#include <cmath>

int main() {
    int X;
    std::cin >> X;
    
    int t = 0;
    int pos = 0;
    
    while (pos < X) {
        t++;
        pos += t;
    }
    
    if (pos - X >= (t/2)) {
        std::cout << t << std::endl;
    } else {
        std::cout << t + (t % 2) << std::endl;
    }
    
    return 0;
}