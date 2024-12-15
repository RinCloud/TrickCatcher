#include <iostream>
#include <vector>
#include <cmath>

int main() {
    int N;
    std::cin >> N;
    std::vector<int> a(N);
    for (int i = 0; i < N; i++) {
        char c;
        std::cin >> c;
        a[i] = c - '0';
    }

    std::vector<std::vector<int>> x(N, std::vector<int>(N));
    for (int i = 0; i < N; i++) {
        x[0][i] = a[i];
    }

    for (int i = 1; i < N; i++) {
        for (int j = 0; j < N - i; j++) {
            x[i][j] = std::abs(x[i - 1][j] - x[i - 1][j + 1]);
        }
    }

    std::cout << x[N - 1][0] << std::endl;

    return 0;
}