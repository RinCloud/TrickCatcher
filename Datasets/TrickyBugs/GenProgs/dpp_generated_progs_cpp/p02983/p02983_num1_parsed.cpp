#include <iostream>

int main() {
    int L, R;
    std::cin >> L >> R;

    int minMod = 2019;
    for (int i = L; i < R; i++) {
        for (int j = i+1; j <= R; j++) {
            int mod = (i * j) % 2019;
            if (mod < minMod) {
                minMod = mod;
            }
        }
    }

    std::cout << minMod << std::endl;

    return 0;
}