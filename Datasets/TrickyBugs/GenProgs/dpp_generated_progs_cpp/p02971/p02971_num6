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
        std::vector<int> temp = sequence;
        temp.erase(temp.begin() + i);
        int max_value = *std::max_element(temp.begin(), temp.end());
        std::cout << max_value << std::endl;
    }
    
    return 0;
}