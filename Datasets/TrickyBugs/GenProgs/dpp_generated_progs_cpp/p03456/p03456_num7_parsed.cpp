#include <iostream>
#include <cmath>
#include <string>

int main() {
    int a, b;
    std::cin >> a >> b;

    std::string concat = std::to_string(a) + std::to_string(b);
    int num = std::stoi(concat);

    int sqr = sqrt(num);

    if (sqr * sqr == num) {
        std::cout << "Yes" << std::endl;
    } else {
        std::cout << "No" << std::endl;
    }

    return 0;
}