#include <iostream>
#include <vector>
#include <cmath>
#include <algorithm>

int main() {
    int N, X;
    std::cin >> N >> X;
    
    std::vector<int> cities(N);
    for(int i=0; i<N; i++){
        std::cin >> cities[i];
    }
    
    int max_distance = 0;
    for(int i=0; i<N; i++){
        max_distance = std::max(max_distance, std::abs(cities[i] - X));
    }
    
    std::cout << max_distance << std::endl;
    
    return 0;
}
