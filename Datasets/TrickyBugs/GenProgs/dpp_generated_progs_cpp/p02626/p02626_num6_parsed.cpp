#include <iostream>
#include <vector>
#include <algorithm>

typedef long long ll;

int main() {
    int n;
    std::cin >> n;
    
    std::vector<ll> piles(n);
    for (int i = 0; i < n; i++) {
        std::cin >> piles[i];
    }
    
    ll max_stones = *std::max_element(piles.begin(), piles.end());
    ll sum_stones = 0;
    for (int i = 0; i < n; i++) {
        sum_stones += piles[i];
    }
    
    if (max_stones <= sum_stones - max_stones) {
        std::cout << -1 << std::endl;
    } else {
        std::cout << max_stones - (sum_stones - max_stones) + 1 << std::endl;
    }
    
    return 0;
}