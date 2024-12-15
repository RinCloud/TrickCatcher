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
    
    std::vector<int> diffs(N);
    for (int i = 0; i < N; i++) {
        diffs[i] = A[i] - (i+1);
    }
    
    std::sort(diffs.begin(), diffs.end());
    
    int median = diffs[N/2];
    
    int sadness = 0;
    for (int i = 0; i < N; i++) {
        sadness += std::abs(diffs[i] - median);
    }
    
    std::cout << sadness << std::endl;
    
    return 0;
}