#include <iostream>
#include <vector>
#include <algorithm>
#include <cmath>

int main() {
    int N;
    std::cin >> N;
    
    std::vector<int> cards(N);
    for (int i = 0; i < N; i++) {
        std::cin >> cards[i];
    }
    
    std::sort(cards.begin(), cards.end());
    
    int sumSnuke = 0;
    int sumRaccoon = 0;
    
    for (int i = N - 1; i >= 0; i--) {
        if (i % 2 == 0) {
            sumSnuke += cards[i];
        }
        else {
            sumRaccoon += cards[i];
        }
    }
    
    int answer = std::abs(sumSnuke - sumRaccoon);
    std::cout << answer << std::endl;
    
    return 0;
}