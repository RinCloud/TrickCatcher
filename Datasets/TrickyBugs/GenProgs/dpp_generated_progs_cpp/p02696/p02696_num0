#include <iostream>
#include <cmath>

int main() {
    int A, B, N;
    std::cin >> A >> B >> N;

    int maxVal = 0;
    for (int x = 0; x <= N; x++) {
        int val = std::floor(A*x/B) - A*std::floor(x/B);
        maxVal = std::max(maxVal, val);
    }

    std::cout << maxVal << std::endl;

    return 0;
}