#include <iostream>
#include <cmath>
#include <limits>

int main() {
    int X, N;
    std::cin >> X >> N;
    
    int nearest = std::numeric_limits<int>::max();
    int minDiff = std::numeric_limits<int>::max();
    
    for (int i = 0; i < N; i++) {
        int p;
        std::cin >> p;
        
        int diff = std::abs(X - p);
        if (diff < minDiff || (diff == minDiff && p < nearest)) {
            nearest = p;
            minDiff = diff;
        }
    }
    
    int candidate = X;
    while (true) {
        if (std::abs(X - candidate) < minDiff || (std::abs(X - candidate) == minDiff && candidate < nearest)) {
            nearest = candidate;
            break;
        }
        candidate--;
    }
    
    candidate = X + 1;
    while (true) {
        if (std::abs(X - candidate) < minDiff || (std::abs(X - candidate) == minDiff && candidate < nearest)) {
            nearest = candidate;
            break;
        }
        candidate++;
    }
    
    std::cout << nearest << std::endl;
    
    return 0;
}
