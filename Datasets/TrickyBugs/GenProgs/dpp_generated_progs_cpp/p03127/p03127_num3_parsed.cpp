#include <iostream>
#include <vector>
#include <algorithm>

int main() {
    int N;
    std::cin >> N;
    
    std::vector<int> monsters(N);
    for (int i = 0; i < N; i++) {
        std::cin >> monsters[i];
    }
    
    int min_health = monsters[0];
    for (int i = 1; i < N; i++) {
        min_health = std::min(min_health, monsters[i]);
    }
    
    std::cout << min_health << std::endl;
    
    return 0;
}
