#include <iostream>
#include <vector>
#include <cmath>

long long find_x_value(int N, const std::vector<int>& sequence) {
    std::vector<std::vector<long long>> x(N, std::vector<long long>(N, 0));

    for (int j = 0; j < N; ++j) {
        x[0][j] = sequence[j];
    }

    for (int i = 1; i < N; ++i) {
        for (int j = 0; j < N - i; ++j) {
            x[i][j] = std::abs(x[i - 1][j] - x[i - 1][j + 1]);
        }
    }

    return x[N - 1][0];
}

int main() {
    int N;
    std::cin >> N;

    std::vector<int> sequence(N);
    for (int i = 0; i < N; ++i) {
        char digit;
        std::cin >> digit;
        sequence[i] = digit - '0';
    }

    long long x = find_x_value(N, sequence);
    std::cout << x << std::endl;

    return 0;
}