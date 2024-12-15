#include <iostream>
#include <vector>

int main() {
    int N, L, T;
    std::cin >> N >> L >> T;
    
    std::vector<int> X(N);
    std::vector<int> W(N);
    for (int i = 0; i < N; i++) {
        std::cin >> X[i] >> W[i];
    }
    
    std::vector<int> finalPos(N);
    for (int i = 0; i < N; i++) {
        if (W[i] == 1) {
            finalPos[i] = (X[i] + T) % L;
        } else {
            finalPos[i] = (X[i] - T + L) % L;
        }
    }
    
    for (int i = 0; i < N; i++) {
        std::cout << finalPos[i] << std::endl;
    }
    
    return 0;
}