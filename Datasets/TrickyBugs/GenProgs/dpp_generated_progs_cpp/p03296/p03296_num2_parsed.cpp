#include <iostream>
#include <vector>
#include <unordered_map>

int main() {
    int N;
    std::cin >> N;
    
    std::vector<int> slimes(N);
    for (int i = 0; i < N; i++) {
        std::cin >> slimes[i];
    }
    
    std::unordered_map<int, int> colorCounts;
    
    int spellCount = 0;
    for (int i = 0; i < N; i++) {
        int color = slimes[i];
        
        if (i > 0 && color == slimes[i-1]) {
            colorCounts[color]++;
            
            if (colorCounts[color] > 1) {
                spellCount++;
            }
        }
        
        if (i < N-1 && color == slimes[i+1]) {
            colorCounts[color]++;
            
            if (colorCounts[color] > 1) {
                spellCount++;
            }
        }
    }
    
    std::cout << spellCount << std::endl;
    
    return 0;
}