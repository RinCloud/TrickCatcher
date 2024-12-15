#include <iostream>

int main() {
    int X;
    std::cin >> X;
    
    int largestPower = 0;
    for (int b = 1; b <= X; ++b) {
        for (int p = 2; ; ++p) {
            int power = 1;
            for (int i = 0; i < p; ++i) {
                power *= b;
            }
            if (power > X) {
                break;
            } else {
                largestPower = power;
            }
        }
    }
    
    std::cout << largestPower << std::endl;
    
    return 0;
}