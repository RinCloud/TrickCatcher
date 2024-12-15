#include <iostream>
#include <cmath>
#include <iomanip>

int main() {
    long long A;
    double B;
    std::cin >> A >> B;

    long long result = (long long)(A * B);
    std::cout << result << std::endl;

    return 0;
}