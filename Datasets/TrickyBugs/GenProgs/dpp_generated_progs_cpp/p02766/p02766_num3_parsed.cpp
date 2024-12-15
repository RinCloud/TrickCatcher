#include <iostream>
#include <cmath>

int main() {
    int N, K;
    std::cin >> N >> K;

    int count = 0;
    while (N > 0) {
        N /= K;
        count++;
    }

    std::cout << count << std::endl;

    return 0;
}