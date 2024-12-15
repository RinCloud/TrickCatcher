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
    
    int count_negative = 0;
    long long sum = 0;
    
    for (int i = 0; i < N; i++) {
        sum += std::abs(A[i]);
        if (A[i] < 0) {
            count_negative++;
        }
    }
    
    if (count_negative % 2 == 1) {
        int min_abs_value = INT_MAX;
        
        for (int i = 0; i < N; i++) {
            sum -= std::abs(A[i]);
            min_abs_value = std::min(min_abs_value, std::abs(A[i]));
        }
        
        sum += min_abs_value * 2;
    }
    
    std::cout << sum << std::endl;
    
    return 0;
}