#include <iostream>

int main() {
    int a, b, c, d, e, k;
    std::cin >> a >> b >> c >> d >> e >> k;

    if((b - a) > k || (c - b) > k || (d - c) > k || (e - d) > k) {
        std::cout << ":(" << std::endl;
    } else {
        std::cout << "Yay!" << std::endl;
    }

    return 0;
}
