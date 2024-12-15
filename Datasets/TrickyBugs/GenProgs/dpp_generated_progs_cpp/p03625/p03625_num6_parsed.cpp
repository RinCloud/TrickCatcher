#include <iostream>
#include <vector>
#include <algorithm>

int main() {
    int N;
    std::cin >> N;
    
    std::vector<int> sticks(N);
    for (int i = 0; i < N; i++) {
        std::cin >> sticks[i];
    }
    
    std::sort(sticks.begin(), sticks.end(), std::greater<int>());
    
    int maxArea = 0;
    for (int i = 0; i < N - 3; i++) {
        if (sticks[i] == sticks[i+1] && sticks[i+2] == sticks[i+3]) {
            int area = sticks[i] * sticks[i+2];
            maxArea = std::max(maxArea, area);
        }
    }
    
    std::cout << maxArea << std::endl;
    
    return 0;
}