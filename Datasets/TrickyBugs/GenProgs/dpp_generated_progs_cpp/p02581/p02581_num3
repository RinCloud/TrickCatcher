#include <iostream>
#include <vector>
#include <algorithm>
using namespace std;

int main() {
    int N;
    cin >> N;
    vector<int> cards(3 * N);
    for (int i = 0; i < 3 * N; i++) {
        cin >> cards[i];
    }

    sort(cards.begin(), cards.end());

    int maxPoints = 0;

    for (int i = 0; i < N; i++) {
        int points = 0;
        int j = 3 * N - 2 - 2 * i;
        if (cards[j] == cards[j + 1]) {
            points++;
            swap(cards[j], cards[j + 1]);
        }
        if (cards[j] == cards[j + 2]) {
            points++;
            swap(cards[j], cards[j + 2]);
        }
        if (cards[j + 1] == cards[j + 2]) {
            points++;
        }
        maxPoints = max(maxPoints, points);
    }

    cout << maxPoints << endl;

    return 0;
}