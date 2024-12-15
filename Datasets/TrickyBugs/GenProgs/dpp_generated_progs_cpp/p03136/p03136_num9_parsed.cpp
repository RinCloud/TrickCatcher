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
    
    std::sort(sides.begin(), sides.end());
    
    int longestSide = sides[N-1];
    int sumOfOtherSides = 0;
    for (int i = 0; i < N-1; i++) {
        sumOfOtherSides += sides[i];
    }
    
    if (longestSide < sumOfOtherSides) {
        std::cout << "Yes" << std::endl;
    } else {
        std::cout << "No" << std::endl;
    }
    
    return 0;
}