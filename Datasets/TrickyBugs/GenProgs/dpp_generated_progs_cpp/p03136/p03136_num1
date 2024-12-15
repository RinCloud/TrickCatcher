#include <iostream>
#include <vector>
#include <algorithm>

int main() {
    int N;
    std::cin >> N;

    std::vector<int> sides(N);
    for (int i = 0; i < N; i++) {
        std::cin >> sides[i];
    }
    
    // Sort the sides in non-decreasing order
    std::sort(sides.begin(), sides.end());
    
    // Check the triangle inequality: longest side < sum of other sides
    if (sides[N-1] < std::accumulate(sides.begin(), sides.end() - 1, 0)) {
        std::cout << "Yes" << std::endl;
    } else {
        std::cout << "No" << std::endl;
    }

    return 0;
}