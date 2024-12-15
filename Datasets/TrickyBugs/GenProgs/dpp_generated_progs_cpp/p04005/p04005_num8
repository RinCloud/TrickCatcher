#include <iostream>

int main() {
    long long A, B, C;
    std::cin >> A >> B >> C;

    // Calculate the minimum possible difference
    long long min_diff = std::max({A * B * (C - C / 2), A * (B - B / 2) * C, (A - A / 2) * B * C}) - std::min({A * B * (C - C / 2), A * (B - B / 2) * C, (A - A / 2) * B * C});

    std::cout << min_diff << std::endl;

    return 0;
}