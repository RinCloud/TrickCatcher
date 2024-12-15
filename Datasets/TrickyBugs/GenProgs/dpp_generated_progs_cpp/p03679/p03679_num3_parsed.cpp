#include <iostream>

int main() {
    int X, A, B;
    std::cin >> X >> A >> B;

    if (B <= A) {
        std::cout << "delicious";
    } else if (B <= A + X) {
        std::cout << "safe";
    } else {
        std::cout << "dangerous";
    }

    return 0;
}