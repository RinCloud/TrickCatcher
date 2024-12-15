#include <iostream>
#include <algorithm>
#include <vector>
 
int main() {
    int N;
    std::cin >> N;
    
    std::vector<int> cards(N);
    for (int i = 0; i < N; i++) {
        std::cin >> cards[i];
    }
    
    // Sort the cards in increasing order
    std::sort(cards.begin(), cards.end());
    
    // Count the number of distinct values
    int distinctCount = 1;
    for (int i = 1; i < N; i++) {
        if (cards[i] != cards[i-1]) {
            distinctCount++;
        }
    }
    
    // Calculate the maximum number of remaining cards
    int remainingCards = (N - distinctCount) % 2 == 0 ? distinctCount : distinctCount - 1;
    
    std::cout << remainingCards << std::endl;
    
    return 0;
}