#include <iostream>

int main() {
    long long N, A, B;
    std::cin >> N >> A >> B;

    long long blue_balls = 0;

    long long total_balls = A + B;
    long long full_repetitions = N / (total_balls);

    // Calculate the number of blue balls in the previous full repetitions
    blue_balls += full_repetitions * A;

    // Calculate the remaining balls after the full repetitions
    long long remaining_balls = N % (total_balls);

    // Add the number of blue balls from the remaining balls
    blue_balls += std::min(remaining_balls, A);

    std::cout << blue_balls << std::endl;

    return 0;
}
