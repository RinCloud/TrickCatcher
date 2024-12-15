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
    
    int total_cost = 0;
    for (int i = 0; i < N; i++) {
        total_cost += abs(A[i]);
    }
    
    for (int i = 0; i < N; i++) {
        int canceled_cost = total_cost;
        
        if (i > 0) {
            canceled_cost -= abs(A[i] - A[i-1]);
        }
        
        if (i < N-1) {
            canceled_cost -= abs(A[i] - A[i+1]);
        }
        
        std::cout << canceled_cost << std::endl;
    }
    
    return 0;
}