#include <iostream>
#include <cmath>
#include <climits>
#include <vector>
#include <algorithm>

int main() {
    int X, N;
    std::cin >> X >> N;
    
    std::vector<int> sequence(N);
    for (int i = 0; i < N; i++) {
        std::cin >> sequence[i];
    }
    
    int nearest = INT_MAX;
    int min_distance = INT_MAX;
    
    for (int i = 1; i <= 100; i++) {
        if (std::find(sequence.begin(), sequence.end(), i) == sequence.end()) {
            int distance = std::abs(X - i);
            if (distance < min_distance || (distance == min_distance && i < nearest)) {
                nearest = i;
                min_distance = distance;
            }
        }
    }
    
    std::cout << nearest << std::endl;
    
    return 0;
}