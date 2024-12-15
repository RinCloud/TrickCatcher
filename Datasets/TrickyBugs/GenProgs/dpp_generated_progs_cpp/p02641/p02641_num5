#include <iostream>
#include <cmath>
#include <vector>
#include <algorithm>

int main() {
    int X, N;
    std::cin >> X >> N;
    
    std::vector<int> p(N);
    for (int i = 0; i < N; ++i) {
        std::cin >> p[i];
    }
    
    int nearest = X;
    int minimum_difference = std::abs(X - p[0]);
    
    for (int i = 1; i < N; ++i) {
        if (std::abs(X - p[i]) < minimum_difference) {
            nearest = p[i];
            minimum_difference = std::abs(X - p[i]);
        }
    }
    
    for (int i = 1; i < N; ++i) {
        if (std::abs(X - p[i]) == minimum_difference && p[i] < nearest) {
            nearest = p[i];
        }
    }
    
    if (X < nearest) {
        nearest = X;
    }
    
    std::cout << nearest << std::endl;
    
    return 0;
}