#include <iostream>
#include <algorithm>

int main() {
    int A, B, C, K;
    std::cin >> A >> B >> C >> K;

    // Create a vector to store the values
    std::vector<int> values = {A, B, C};

    // Sort the vector in descending order
    std::sort(values.rbegin(), values.rend());

    // Perform the doubling operation K times
    for (int i = 0; i < K; i++) {
        // Double the largest value
        values[0] *= 2;

        // Sort the vector in descending order again
        std::sort(values.rbegin(), values.rend());
    }

    // Calculate and print the sum of the values
    int sum = 0;
    for (int value : values) {
        sum += value;
    }
    std::cout << sum << std::endl;

    return 0;
}