#include <iostream>
#include <vector>
#include <cmath>
#include <limits>

int main() {
    int N;
    std::cin >> N;
    
    std::vector<int> A(N);
    for (int i = 0; i < N; i++) {
        std::cin >> A[i];
    }
    
    int min_sadness = std::numeric_limits<int>::max();
    for (int b = 1; b <= N; b++) {
        int sadness = 0;
        for (int i = 0; i < N; i++) {
            sadness += std::abs(A[i] - (b + i));
        }
        min_sadness = std::min(min_sadness, sadness);
    }
    
    std::cout << min_sadness << std::endl;
    
    return 0;
}