#include <iostream>

int main() {
    long long N, X, M;
    std::cin >> N >> X >> M;

    long long sum = X;
    long long previous = X;
    long long count = 0;
    long long cycle_start = 0;
    long long cycle_end = 0;
    long long cycle_sum = 0;

    for (int i = 2; i <= N; i++) {
        long long next = (previous * previous) % M;
        sum += next;
        previous = next;

        if (next == X) {
            count = i - 1;
            break;
        }
    }

    if (count > 0) {
        for (int i = N - count; i > 0; i--) {
            cycle_sum += (previous * previous) % M;
            previous = (previous * previous) % M;
        }
    }

    long long cycles = (N - count) / count;
    long long remaining = (N - count) % count;

    cycle_sum = cycle_sum * cycles;
    sum += cycle_sum;

    for (int i = 1; i <= remaining; i++) {
        long long next = (previous * previous) % M;
        sum += next;
        previous = next;
    }

    std::cout << sum << std::endl;

    return 0;
}
