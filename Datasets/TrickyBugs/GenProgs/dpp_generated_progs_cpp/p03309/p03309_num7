#include <iostream>
#include <vector>
#include <algorithm>
#include <cmath>

int main() {
    int N;
    std::cin >> N;
    
    std::vector<int> A(N);
    for (int i = 0; i < N; i++) {
        std::cin >> A[i];
    }
    
    std::sort(A.begin(), A.end());
    
    int min_sadness = INT_MAX;
    for (int b = A[0]; b <= A[N-1]; b++) {
        int sadness = 0;
        for (int i = 0; i < N; i++) {
            sadness += std::abs(A[i] - (b+i+1));
        }
        min_sadness = std::min(min_sadness, sadness);
    }
    
    std::cout << min_sadness << std::endl;
    
    return 0;
}