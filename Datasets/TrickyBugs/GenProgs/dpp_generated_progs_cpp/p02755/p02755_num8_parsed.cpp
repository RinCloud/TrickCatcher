#include <iostream>
#include <cmath>

int main() {
    int A, B;
    std::cin >> A >> B;

    bool found = false;
    int price;

    for (int p = 1; p <= 1000000; p++) {
        int tax8 = std::floor(p * 0.08);
        int tax10 = std::floor(p * 0.1);

        if (tax8 == A && tax10 == B) {
            price = p;
            found = true;
            break;
        }
    }

    if (found) {
        std::cout << price << std::endl;
    } else {
        std::cout << -1 << std::endl;
    }

    return 0;
}
