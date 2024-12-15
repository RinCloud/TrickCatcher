#include <iostream>
#include <cmath>

int main() {
    int X;
    std::cin >> X;

    // Calculate the absolute value of X
    X = std::abs(X);

    // Find the earliest possible time to reach coordinate X
    int time = 0;
    int distance = 0;
    while (distance < X) {
        time++;
        distance += time;
    }

    // If the distance is greater than X, adjust the time
    while (distance - X > 1 || (distance - X == 1 && time % 2 == 0)) {
        time++;
        distance -= time;
    }

    std::cout << time << std::endl;

    return 0;
}