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
    
    // Check if the longest side is strictly shorter than the sum of the other sides
    int sumOfOtherSides = 0;
    for (int i = 0; i < N-1; i++) {
        sumOfOtherSides += sides[i];
    }
    
    if (sides[N-1] < sumOfOtherSides) {
        std::cout << "Yes" << std::endl;
    } else {
        std::cout << "No" << std::endl;
    }
    
    return 0;
}