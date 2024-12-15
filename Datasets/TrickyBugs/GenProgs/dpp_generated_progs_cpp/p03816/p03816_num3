#include <iostream>
#include <unordered_map>
#include <vector>

using namespace std;

int main() {
    // Read input
    int N;
    cin >> N;
    vector<int> cards(N);
    for (int i = 0; i < N; i++) {
        cin >> cards[i];
    }
    
    // Count the frequency of each card value
    unordered_map<int, int> freq;
    for (int card : cards) {
        freq[card]++;
    }
    
    // Find the maximum frequency
    int max_freq = 0;
    for (auto it = freq.begin(); it != freq.end(); it++) {
        max_freq = max(max_freq, it->second);
    }
    
    // Calculate the maximum possible number of remaining cards
    int remaining_cards = N - max_freq;
    cout << remaining_cards << endl;
    
    return 0;
}