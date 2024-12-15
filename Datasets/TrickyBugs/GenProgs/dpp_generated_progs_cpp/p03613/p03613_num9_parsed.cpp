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
    
    std::sort(sequence.begin(), sequence.end());
    
    int maxCount = 0;
    for (int X = sequence[0] - 1; X <= sequence[N - 1] + 1; X++) {
        int count = 0;
        for (int i = 0; i < N; i++) {
            count += std::max(0, std::abs(sequence[i] - X) <= 1);
        }
        maxCount = std::max(maxCount, count);
    }
    
    std::cout << maxCount << std::endl;
    
    return 0;
}