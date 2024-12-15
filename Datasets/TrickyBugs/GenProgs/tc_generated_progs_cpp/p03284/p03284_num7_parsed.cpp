#include <iostream>
#include <cstdlib>

int main() {
    int a, b;
    std::cin >> a >> b;
    std::cout << std::abs((a % b) - b / 2);
    return 0;
}
