#include <iostream>
#include <vector>
#include <algorithm>

int main() {
    int N;
    std::cin >> N;
    
    std::vector<int> houseCoordinates(N);
    for (int i = 0; i < N; i++) {
        std::cin >> houseCoordinates[i];
    }
    
    std::sort(houseCoordinates.begin(), houseCoordinates.end());
    
    int minDistance = houseCoordinates[N-1] - houseCoordinates[0];
    std::cout << minDistance << std::endl;
    
    return 0;
}