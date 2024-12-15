#include <iostream>
#include <cmath>

int main() {
    long long A;
    double B;
    std::cin >> A >> B;
    
    long long result = static_cast<long long>(A * B);
    std::cout << result << std::endl;
    
    return 0;
}