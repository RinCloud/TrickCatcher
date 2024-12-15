#include <iostream>

int main() {
    int a, b, c;
    std::cin >> a >> b >> c;

    if ((a + b + c) % 2 == 0 && (a + b) >= c && (b + c) >= a && (c + a) >= b) {
        std::cout << "Yes";
    } else {
        std::cout << "No";
    }

    return 0;
}