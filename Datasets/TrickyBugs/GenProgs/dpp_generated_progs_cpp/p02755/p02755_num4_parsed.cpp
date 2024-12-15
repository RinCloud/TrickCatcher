#include <iostream>
#include <cmath>

int main() {
    int A, B;
    std::cin >> A >> B;

    int price = -1;

    for (int i = 1; i <= 10000; i++) {
        int tax8 = std::floor(i * 0.08);
        int tax10 = std::floor(i * 0.1);

        if (tax8 == A && tax10 == B) {
            price = i;
            break;
        }
    }

    std::cout << price << std::endl;

    return 0;
}