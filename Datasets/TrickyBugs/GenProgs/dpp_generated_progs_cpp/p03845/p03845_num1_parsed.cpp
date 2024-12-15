#include <iostream>
#include <vector>

int main() {
    int N;
    std::cin >> N;
    
    std::vector<int> T(N);
    for (int i = 0; i < N; i++) {
        std::cin >> T[i];
    }
    
    int M;
    std::cin >> M;
    
    std::vector<int> P(M);
    std::vector<int> X(M);
    for (int i = 0; i < M; i++) {
        std::cin >> P[i] >> X[i];
    }
    
    for (int i = 0; i < M; i++) {
        int total_time = 0;
        for (int j = 0; j < N; j++) {
            if (j + 1 == P[i]) {
                total_time += X[i];
            } else {
                total_time += T[j];
            }
        }
        std::cout << total_time << std::endl;
    }
    
    return 0;
}