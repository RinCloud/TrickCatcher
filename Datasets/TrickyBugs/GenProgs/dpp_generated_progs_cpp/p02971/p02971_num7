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
        int max_value = *std::max_element(sequence.begin() + (i != 0), sequence.begin() + i);
        max_value = std::max(max_value, *std::max_element(sequence.begin() + i + 1, sequence.end()));
        std::cout << max_value << std::endl;
    }
    
    return 0;
}