#include <iostream>

int main() {
    int N, M;
    std::cin >> N >> M;

    int totalTime = 0;
    
    // Calculate the total execution time for the code to correctly solve M cases
    for (int i = 0; i < M; i++) {
        totalTime += 1900;
    }
    
    // Calculate the total execution time for the code to correctly solve N-M cases
    for (int i = 0; i < N - M; i++) {
        totalTime += 100;
    }
    
    std::cout << totalTime << std::endl;

    return 0;
}