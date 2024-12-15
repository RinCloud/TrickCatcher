#include <iostream>
#include <cmath>

int main() {
    std::string n;
    std::cin >> n;

    int numDigits = n.size();
    int numZeroes = std::stoi(n) - std::pow(10, numDigits - 1) + 1;

    std::cout << (numDigits - 1) * 9 + numZeroes << std::endl;

    return 0;
}