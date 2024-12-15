#include <iostream>
#include <cmath>

int main() {
    // Read input values
    int A, B, N;
    std::cin >> A >> B >> N;

    // Initialize the maximum value
    int maxVal = 0;

    // Iterate through all possible values of x
    for (int x = 0; x <= N; x++) {
        int val = floor(A * x / B) - A * floor(x / B);
        if (val > maxVal) {
            maxVal = val;
        }
    }

    // Print the maximum value
    std::cout << maxVal << std::endl;

    return 0;
}