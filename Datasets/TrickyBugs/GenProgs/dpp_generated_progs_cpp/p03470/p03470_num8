#include <iostream>
#include <vector>
#include <algorithm>

int main() {
    // Read the number of mochis
    int N;
    std::cin >> N;

    // Read the diameters of the mochis
    std::vector<int> diameters(N);
    for (int i = 0; i < N; i++) {
        std::cin >> diameters[i];
    }

    // Sort the diameters in descending order
    std::sort(diameters.begin(), diameters.end(), std::greater<int>());

    // Count the number of unique diameters
    int layers = 1;
    for (int i = 1; i < N; i++) {
        if (diameters[i] < diameters[i-1]) {
            layers++;
        }
    }

    // Print the maximum number of layers
    std::cout << layers << std::endl;

    return 0;
}