#include <iostream>
#include <vector>
#include <algorithm>

int main() {
    int N;
    std::cin >> N;
    
    std::vector<int> houses(N);
    for (int i = 0; i < N; i++) {
        std::cin >> houses[i];
    }
    
    std::sort(houses.begin(), houses.end());
    
    int minDistance = houses[N-1] - houses[0];
    std::cout << minDistance << std::endl;
    
    return 0;
}