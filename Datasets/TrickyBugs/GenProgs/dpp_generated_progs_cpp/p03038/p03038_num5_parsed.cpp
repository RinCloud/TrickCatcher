#include <iostream>
#include <vector>
#include <algorithm>

using namespace std;

int main() {
    int N, M;
    cin >> N >> M;

    vector<int> cards(N);
    for (int i = 0; i < N; i++) {
        cin >> cards[i];
    }

    vector<pair<int, int>> operations(M);
    for (int i = 0; i < M; i++) {
        cin >> operations[i].first >> operations[i].second;
    }

    sort(operations.begin(), operations.end(), greater<pair<int, int>>());

    for (int i = 0; i < M; i++) {
        int numCards = operations[i].first;
        int value = operations[i].second;

        for (int j = 0; j < numCards; j++) {
            if (cards.empty()) break;

            int maxCard = *max_element(cards.begin(), cards.end());
            if (value > maxCard) {
                cards.erase(max_element(cards.begin(), cards.end()));
                cards.push_back(value);
            } else {
                break;
            }
        }
    }

    cout << accumulate(cards.begin(), cards.end(), 0LL) << endl;

    return 0;
}