#include <iostream>
#include <vector>
#include <algorithm>

int main() {
    int N;
    std::cin >> N;
    
    std::vector<int> B(N-1);
    for (int i = 0; i < N-1; i++) {
        std::cin >> B[i];
    }
    
    std::vector<int> A(N);
    A[0] = B[0];
    for (int i = 1; i < N-1; i++) {
        A[i] = std::min(B[i-1], B[i]);
    }
    A[N-1] = B[N-2];
    
    int sum = 0;
    for (int i = 0; i < N; i++) {
        sum += A[i];
    }
    
    std::cout << sum << std::endl;
    
    return 0;
}