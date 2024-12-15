#include <iostream>
#include <vector>
#include <algorithm>

int main() {
    int N, M, K;
    std::cin >> N >> M >> K;
    
    std::vector<int> A(N), B(M);
    for (int i = 0; i < N; i++) {
        std::cin >> A[i];
    }
    for (int i = 0; i < M; i++) {
        std::cin >> B[i];
    }
    
    int sum = 0;
    int count = 0;
    int j = M;
    for (int i = 0; i < N; i++) {
        sum += A[i];
        while (sum > K && j > 0) {
            sum -= B[--j];
        }
        if (sum > K) {
            break;
        }
        count = std::max(count, i + 1 + j);
    }
    
    std::cout << count << std::endl;
    
    return 0;
}
