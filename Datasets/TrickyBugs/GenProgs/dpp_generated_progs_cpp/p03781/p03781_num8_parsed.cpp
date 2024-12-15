#include <iostream>
#include <cmath>

int main() {
    int X;
    std::cin >> X;
    
    int time = std::sqrt(2 * X); // Calculate the earliest possible time
    
    // Check if the estimated time is correct or if it should be incremented by 1
    while (time * (time + 1) / 2 < X) {
        time++;
    }
    
    std::cout << time << std::endl;
    
    return 0;
}