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
    
    for (int i = 0; i < M; i++) {
        int P, X;
        std::cin >> P >> X;
        
        int totalTime = 0;
        for (int j = 0; j < N; j++) {
            if (j == P-1) {
                totalTime += X;
            } else {
                totalTime += T[j];
            }
        }
        
        std::cout << totalTime << std::endl;
    }
    
    return 0;
}