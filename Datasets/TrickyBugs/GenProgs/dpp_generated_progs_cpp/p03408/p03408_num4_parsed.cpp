#include <iostream>
#include <unordered_map>
#include <string>
using namespace std;

int main() {
    int N, M;
    unordered_map<string, int> blueCards, redCards;
    string s;

    // Read the number of blue cards and blue card strings
    cin >> N;
    for (int i = 0; i < N; i++) {
        cin >> s;
        blueCards[s]++;
    }

    // Read the number of red cards and red card strings
    cin >> M;
    for (int i = 0; i < M; i++) {
        cin >> s;
        redCards[s]++;
    }

    int maxEarnings = 0;
    // Find the maximum earnings
    for (auto it = blueCards.begin(); it != blueCards.end(); it++) {
        int earnings = it->second;
        earnings -= redCards[it->first]; // Subtract the number of red cards with same string
        maxEarnings = max(maxEarnings, earnings);
    }

    cout << maxEarnings << endl;

    return 0;
}