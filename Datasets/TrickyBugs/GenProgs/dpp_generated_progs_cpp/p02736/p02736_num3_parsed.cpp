#include <iostream>
#include <vector>
#include <cmath>

int main() {
    int N;
    std::cin >> N;

    std::string sequence;
    std::cin >> sequence;

    std::vector<std::vector<int>> x(N, std::vector<int>(N, 0));

    // Initialize first row of the matrix with the given sequence
    for (int j = 0; j < N; j++) {
        x[0][j] = sequence[j] - '0';
    }

    // Calculate values of x matrix using the given formula
    for (int i = 1; i < N; i++) {
        for (int j = 0; j < N - i; j++) {
            x[i][j] = abs(x[i - 1][j] - x[i - 1][j + 1]);
        }
    }

    std::cout << x[N - 1][0] << std::endl;

    return 0;
}
