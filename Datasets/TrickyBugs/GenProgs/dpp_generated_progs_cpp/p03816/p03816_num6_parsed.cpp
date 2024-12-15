#include <iostream>
#include <vector>
#include <algorithm>
#include <unordered_map>

using namespace std;

int main() {
    int N;
    cin >> N;

    vector<int> cards(N);
    for (int i = 0; i < N; i++) {
        cin >> cards[i];
    }

    // Count the frequency of each card
    unordered_map<int, int> freq;
    for (int i = 0; i < N; i++) {
        freq[cards[i]]++;
    }

    // Find the card with maximum frequency
    int maxFreq = 0;
    for (auto it = freq.begin(); it != freq.end(); ++it) {
        maxFreq = max(maxFreq, it->second);
    }

    // Calculate the maximum number of remaining cards
    int remainingCards = N - maxFreq;
    if (maxFreq > (N + 1) / 2) {
        remainingCards -= (maxFreq - (N + 1) / 2);
    }

    cout << remainingCards << endl;

    return 0;
}