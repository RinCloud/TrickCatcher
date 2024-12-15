#include <iostream>

int main() {
    long long N, X, M;
    std::cin >> N >> X >> M;

    long long sum = X;
    long long current = X;
    long long count = 1;

    while (count < N) {
        current = (current * current) % M;
        sum += current;
        count++;

        if (current == X) {
            long long cycle_length = count - 1;
            long long remaining_iterations = N - count;
            long long cycle_sum = sum - X;

            sum += (remaining_iterations / cycle_length) * cycle_sum;
            count += (remaining_iterations / cycle_length) * cycle_length;
        }
    }

    std::cout << sum << std::endl;

    return 0;
}