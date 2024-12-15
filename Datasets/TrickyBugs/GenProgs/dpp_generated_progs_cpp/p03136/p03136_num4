#include <iostream>
#include <vector>
#include <algorithm>

int main() {
    int N;
    std::cin >> N;
    
    std::vector<int> sides(N);
    for (int i = 0; i < N; ++i) {
        std::cin >> sides[i];
    }
    
    std::sort(sides.begin(), sides.end());
    
    if (sides[N-1] < std::accumulate(sides.begin(), sides.end()-1, 0)) {
        std::cout << "Yes" << std::endl;
    } else {
        std::cout << "No" << std::endl;
    }
    
    return 0;
}