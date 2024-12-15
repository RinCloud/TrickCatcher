#include <iostream>
#include <vector>
#include <map>

using namespace std;

int main() {
    int N;
    cin >> N;

    map<int, int> freq;
    for (int i = 0; i < N; i++) {
        int card;
        cin >> card;
        freq[card]++;
    }

    int maxRemainingCards = 0;
    for (auto it = freq.begin(); it != freq.end(); it++) {
        maxRemainingCards = max(maxRemainingCards, it->second);
    }

    cout << maxRemainingCards << endl;

    return 0;
}