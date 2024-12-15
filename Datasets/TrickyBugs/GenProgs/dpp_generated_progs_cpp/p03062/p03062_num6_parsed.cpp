#include <iostream>
#include <vector>

int main() {
    int N;
    std::cin >> N;
    
    std::vector<int> A(N);
    for (int i = 0; i < N; i++) {
        std::cin >> A[i];
    }
    
    long long sum = 0;
    int neg_count = 0;
    int min_abs_value = INT_MAX;
    
    for (int i = 0; i < N; i++) {
        sum += abs(A[i]);
        if (A[i] < 0) {
            neg_count++;
        }
        min_abs_value = std::min(min_abs_value, abs(A[i]));
    }
    
    if (neg_count % 2 == 0) {
        std::cout << sum << std::endl;
    } else {
        std::cout << sum - 2 * min_abs_value << std::endl;
    }
    
    return 0;
}