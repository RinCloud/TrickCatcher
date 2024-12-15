#include <iostream>
#include <vector>

int minimizeWateringOperations(int N, std::vector<int>& heights) {
    int operations = 0;
    
    for (int i = 1; i <= N; i++) {
        int diff = heights[i] - heights[i - 1];
        if (diff > 0) {
            operations += diff;
            heights[i] -= diff;
        }
    }
    
    return operations;
}

int main() {
    int N;
    std::cin >> N;
    
    std::vector<int> heights(N + 1);
    for (int i = 1; i <= N; i++) {
        std::cin >> heights[i];
    }
    
    int minOperations = minimizeWateringOperations(N, heights);
    
    std::cout << minOperations << std::endl;
    
    return 0;
}