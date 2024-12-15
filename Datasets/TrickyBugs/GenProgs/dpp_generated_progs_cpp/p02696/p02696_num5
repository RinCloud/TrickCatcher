#include <iostream>
#include <cmath>

int main() {
    // Read the inputs
    int A, B, N;
    std::cin >> A >> B >> N;
    
    // Initialize the maximum difference to a small negative value
    int maxDifference = -1e9;
    
    // Iterate over all possible values of x from 0 to N
    for (int x = 0; x <= N; x++) {
        // Calculate the value of floor(Ax/B) - A * floor(x/B)
        int difference = std::floor(A * x / B) - A * std::floor(x / B);
        
        // Update the maximum difference if the current difference is greater
        if (difference > maxDifference) {
            maxDifference = difference;
        }
    }
    
    // Print the maximum difference
    std::cout << maxDifference << std::endl;
    
    return 0;
}