#include <iostream>
#include <vector>
#include <algorithm>

int main() {
    int N;
    std::cin >> N;
    
    std::vector<int> A(N);
    for (int i = 0; i < N; i++) {
        std::cin >> A[i];
    }
    
    int minTotalHeight = 0;
    int maxFrontHeight = 0;
    
    for (int i = 0; i < N; i++) {
        if (A[i] > maxFrontHeight) {
            maxFrontHeight = A[i];
        } else {
            minTotalHeight += maxFrontHeight - A[i];
        }
    }
    
    std::cout << minTotalHeight << std::endl;
    
    return 0;
}