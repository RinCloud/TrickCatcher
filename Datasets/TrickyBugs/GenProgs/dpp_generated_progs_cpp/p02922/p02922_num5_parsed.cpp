#include <iostream>

int main() {
    int A, B;
    std::cin >> A >> B;

    int powerStrips = (B - 1) / (A - 1);
    if ((B - 1) % (A - 1) != 0) {
        powerStrips++;
    }

    std::cout << powerStrips << std::endl;

    return 0;
}