#include <iostream>

int main() {
    int a, b, c, d, e, k;
    std::cin >> a >> b >> c >> d >> e >> k;

    if (e - a > k) {
        std::cout << ":(\n";
    } else {
        std::cout << "Yay!\n";
    }

    return 0;
}
