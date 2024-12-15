#include <iostream>
#include <unordered_map>

using namespace std;

int main() {
    int N, M;
    cin >> N;
    
    unordered_map<string, int> cards;
    
    // Read the blue cards
    for (int i = 0; i < N; i++) {
        string card;
        cin >> card;
        cards[card]++;
    }
    
    cin >> M;
    
    int balance = 0;
    
    // Read the red cards
    for (int i = 0; i < M; i++) {
        string card;
        cin >> card;
        cards[card]--;
    }
    
    // Compute the maximum balance
    for (auto it = cards.begin(); it != cards.end(); it++) {
        balance = max(balance, it->second);
    }
    
    cout << balance << endl;
    
    return 0;
}