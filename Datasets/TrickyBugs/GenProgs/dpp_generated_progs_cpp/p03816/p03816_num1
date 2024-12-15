#include <iostream>
#include <vector>
#include <unordered_map>

using namespace std;

int main() {
    int N;
    cin >> N;

    vector<int> cards(N);
    unordered_map<int, int> freq;

    for (int i = 0; i < N; i++) {
        cin >> cards[i];
        freq[cards[i]]++;
    }

    int maxRemainingCards = 0;
    for (auto it = freq.begin(); it != freq.end(); it++) {
        maxRemainingCards = max(maxRemainingCards, it->second);
    }

    cout << maxRemainingCards << endl;

    return 0;
}