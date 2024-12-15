#include <iostream>
#include <unordered_set>

int main() {
    int N, X, D;
    std::cin >> N >> X >> D;

    // Case when D = 0
    if (D == 0) {
        if (X != 0) {
            std::cout << "1" << std::endl;
        } else {
            std::cout << N + 1 << std::endl;
        }
        return 0;
    }

    // Case when D > 0
    if (D < 0) {
        X = -X;
        D = -D;
    }

    long long count = 0;
    std::unordered_set<long long> possible_values;

    for (int i = 0; i <= N; i++) {
        long long s = (long long)X * i + ((long long)i * (i - 1) / 2) * D;
        possible_values.insert(s);
    }

    std::cout << possible_values.size() << std::endl;

    return 0;
}