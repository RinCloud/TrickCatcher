#include <iostream>
#include <cmath>

int minimumF(int n) {
    int minF = INT_MAX;
    int sqrtN = sqrt(n);
    for (int i = 1; i <= sqrtN; i++) {
        if (n % i == 0) {
            int a = i;
            int b = n / i;
            int f = std::max((int)std::log10(a) + 1, (int)std::log10(b) + 1);
            minF = std::min(minF, f);
        }
    }
    return minF;
}

int main() {
    int n;
    std::cin >> n;
    std::cout << minimumF(n) << std::endl;
    return 0;
}