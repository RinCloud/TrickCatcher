#include <iostream>
#include <vector>
#include <algorithm>

int main() {
    int N, K;
    std::cin >> N >> K;
    
    std::vector<int> prices(N);
    for (int i = 0; i < N; i++) {
        std::cin >> prices[i];
    }
    
    std::sort(prices.begin(), prices.end());
    
    int total_price = 0;
    for (int i = 0; i < K; i++) {
        total_price += prices[i];
    }
    
    std::cout << total_price << std::endl;
    
    return 0;
}