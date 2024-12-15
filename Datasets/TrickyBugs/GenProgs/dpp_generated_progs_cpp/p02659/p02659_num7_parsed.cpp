#include <iostream>
#include <cmath>

int main() {
    long long A;
    double B;
    std::cin >> A >> B;
    
    double result = A * B;
    long long truncated = std::trunc(result);
    std::cout << truncated << std::endl;
    
    return 0;
}