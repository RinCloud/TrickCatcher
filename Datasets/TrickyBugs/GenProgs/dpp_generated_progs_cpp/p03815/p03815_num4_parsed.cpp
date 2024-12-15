#include <iostream>
#include <cmath>

int main() {
    long long x;
    std::cin >> x;
    
    long long total = ceil(x/14) * 2;
    long long remainder = (x - 1) % 14;

    if (remainder >= 1 && remainder <= 6) {
        total++;
    } else if (remainder >= 9 && remainder <= 14) {
        total++;
    }
    
    std::cout << total << std::endl;
    
    return 0;
}