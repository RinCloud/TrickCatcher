#include <iostream>
#include <vector>
#include <unordered_set>

int main() {
    int N, Q;
    std::cin >> N >> Q;
    
    std::vector<int> balls(N);
    for (int i = 0; i < N; i++) {
        std::cin >> balls[i];
    }
    
    std::vector<std::pair<int, int>> queries(Q);
    for (int i = 0; i < Q; i++) {
        std::cin >> queries[i].first >> queries[i].second;
    }
    
    std::vector<std::unordered_set<int>> distinctColors(N + 1);
    for (int i = 0; i < N; i++) {
        distinctColors[i + 1] = distinctColors[i];
        distinctColors[i + 1].insert(balls[i]);
    }
    
    for (int i = 0; i < Q; i++) {
        int l = queries[i].first;
        int r = queries[i].second;
        
        int numDistinctColors = distinctColors[r].size() - distinctColors[l - 1].size();
        std::cout << numDistinctColors << std::endl;
    }
    
    return 0;
}