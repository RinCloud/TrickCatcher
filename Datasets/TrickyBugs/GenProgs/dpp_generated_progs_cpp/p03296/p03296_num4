#include <iostream>
#include <vector>
#include <algorithm>

int main() {
    int n;
    std::cin >> n;
    std::vector<int> slimes(n);
    for (int i = 0; i < n; ++i) {
        std::cin >> slimes[i];
    }

    int spells = 0;
    for (int i = 0; i < n - 1; ++i) {
        if (slimes[i] == slimes[i + 1]) {
            ++spells;
            slimes[i + 1] = -1; // Changing the color of the adjacent slime
        }
    }

    std::cout << spells << std::endl;

    return 0;
}