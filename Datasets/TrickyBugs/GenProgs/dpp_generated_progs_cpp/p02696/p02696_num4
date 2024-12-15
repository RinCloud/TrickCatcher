#include <iostream>
#include <cmath>

int main() {
    int A, B, N;
    std::cin >> A >> B >> N;

    int max_val = -1;
    for (int x = 0; x <= N; x++) {
        int val = floor(A * x / B) - A * floor(x / B);
        if (val > max_val) {
            max_val = val;
        }
    }

    std::cout << max_val << std::endl;

    return 0;
}