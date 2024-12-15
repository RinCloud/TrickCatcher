#include <iostream>
#include <vector>
#include <algorithm>

int main() {
    int N;
    std::cin >> N;
    
    std::vector<int> sequence(N);
    for (int i = 0; i < N; i++) {
        std::cin >> sequence[i];
    }
    
    for (int i = 0; i < N; i++) {
        int max = 0;
        for (int j = 0; j < N; j++) {
            if (j != i && sequence[j] > max) {
                max = sequence[j];
            }
        }
        std::cout << max << std::endl;
    }
    
    return 0;
}