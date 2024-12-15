#include <iostream>
#include <vector>
#include <algorithm>

int main() {
    int N, K;
    std::cin >> N >> K;
    
    std::vector<int> A(N);
    for (int i = 0; i < N; i++) {
        std::cin >> A[i];
    }
    
    int minOperations = 0;
    
    for (int i = 0; i < N; i += K) {
        minOperations++;
    }
    
    std::cout << minOperations << std::endl;

    return 0;
}
