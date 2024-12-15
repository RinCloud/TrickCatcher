#include <iostream>
#include <cmath>

int main() {
    int x, y;
    std::cin >> x >> y;

    int count = 0;
    while (true) {
        if (abs(x) > abs(y)) {
            if (x > 0) {
                x -= 1;
                count++;
            } else {
                x += 1;
                count++;
            }
        } else if (abs(x) < abs(y)) {
            if (x > 0) {
                x *= -1;
                count++;
            } else {
                x *= -1;
                count++;
            }
        } else {
            if (x > 0) {
                x -= 1;
                count++;
            } else {
                x *= -1;
                count++;
            }
        }

        if (x == y) {
            break;
        }
    }

    std::cout << count << std::endl;

    return 0;
}