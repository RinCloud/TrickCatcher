#include <iostream>
#include <vector>
#include <cmath>

int main() {
    int N;
    std::cin >> N;
    
    std::vector<int> A(N);
    for (int i = 0; i < N; i++) {
        std::cin >> A[i];
    }
    
    std::vector<int> distances(N);
    for (int i = 1; i < N; i++) {
        distances[i] = std::abs(A[i] - A[i-1]);
    }
    
    int total_cost = 0;
    for (int i = 1; i < N; i++) {
        total_cost += distances[i];
    }
    
    for (int i = 0; i < N; i++) {
        int cost_without_spot_i = total_cost - distances[i+1] - distances[i];
        std::cout << cost_without_spot_i << std::endl;
    }
    
    return 0;
}