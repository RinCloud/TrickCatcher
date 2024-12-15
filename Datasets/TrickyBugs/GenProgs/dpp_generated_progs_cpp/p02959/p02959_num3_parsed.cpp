#include <iostream>
#include <vector>
#include <algorithm>

int main() {
    int N;
    std::cin >> N;
    
    std::vector<int> towns(N + 1);
    for (int i = 0; i < N + 1; i++) {
        std::cin >> towns[i];
    }
    
    std::vector<int> heroes(N);
    for (int i = 0; i < N; i++) {
        std::cin >> heroes[i];
    }
    
    int maxMonsters = 0;
    for (int i = 0; i < N; i++) {
        int defeatedMonsters = std::min(towns[i], heroes[i]);
        maxMonsters += defeatedMonsters;
        towns[i] -= defeatedMonsters;
        
        defeatedMonsters = std::min(towns[i + 1], heroes[i] - defeatedMonsters);
        maxMonsters += defeatedMonsters;
        towns[i + 1] -= defeatedMonsters;
    }
    
    std::cout << maxMonsters << std::endl;
    
    return 0;
}