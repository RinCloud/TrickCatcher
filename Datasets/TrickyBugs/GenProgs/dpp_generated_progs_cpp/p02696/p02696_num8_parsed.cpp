#include <iostream>
#include <cmath>

int main() {
    int A, B, N;
    std::cin >> A >> B >> N;

    int max_value = -1; // initialize max_value as -1

    for (int x = 0; x <= N; x++) {
        int numerator = A * x;
        int denominator = B;
        int floor_value = numerator / denominator; // floor(Ax/B)

        int value = floor_value - (A * (x / B)); // floor(Ax/B) - A * floor(x/B)

        if (value > max_value) {
            max_value = value; // update max_value
        }
    }

    std::cout << max_value << std::endl;

    return 0;
}