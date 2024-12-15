#include <iostream>
#include <unordered_map>
#include <vector>
#include <algorithm>
using namespace std;

int main() {
    int N;
    cin >> N;
    unordered_map<int, int> freq;
    vector<int> cards(N);

    for (int i = 0; i < N; i++) {
        cin >> cards[i];
        freq[cards[i]]++;
    }

    sort(cards.begin(), cards.end());

    int remaining_cards = N;
    for (int i = 0; i < N - 2; i++) {
        if (cards[i] == cards[i + 1] && cards[i] == cards[i + 2]) {
            freq[cards[i]] -= 3;
            remaining_cards -= 3;
            i += 2;
        }
    }

    for (const auto& kvp : freq) {
        remaining_cards -= (kvp.second % 2);
    }

    cout << remaining_cards << endl;

    return 0;
}