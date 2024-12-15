#include <iostream>
#include <vector>

int main() {
    int N, X;
    std::cin >> N >> X;
    
    std::vector<int> L(N);
    for (int i = 0; i < N; i++) {
        std::cin >> L[i];
    }
    
    int bounceCount = 1; // ball always bounces at coordinate 0
    int currentPosition = 0;
    
    for (int i = 0; i < N; i++) {
        currentPosition += L[i];
        
        if (currentPosition <= X) {
            bounceCount++;
        } else {
            break; // no need to continue checking as the ball will not bounce beyond X
        }
    }
    
    std::cout << bounceCount << std::endl;
    
    return 0;
}