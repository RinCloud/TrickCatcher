#include <iostream>
#include <cmath>

int main() {
    int A, B;
    std::cin >> A >> B;

    int price = -1;
    for (int p = 1; p <= 1000; p++) {
        int tax8 = std::floor(p * 0.08);
        int tax10 = std::floor(p * 0.1);

        if (tax8 == A && tax10 == B) {
            price = p;
            break;
        }
    }

    std::cout << price << std::endl;

    return 0;
}