#include <iostream>
#include <vector>
#include <unordered_set>

int main() {
    int N, Q;
    std::cin >> N >> Q;
    
    std::vector<int> balls(N);
    for (int i = 0; i < N; i++) {
        std::cin >> balls[i];
    }
    
    for (int i = 0; i < Q; i++) {
        int left, right;
        std::cin >> left >> right;
        
        std::unordered_set<int> uniqueColors;
        for (int j = left-1; j < right; j++) {
            uniqueColors.insert(balls[j]);
        }
        
        std::cout << uniqueColors.size() << std::endl;
    }
    
    return 0;
}