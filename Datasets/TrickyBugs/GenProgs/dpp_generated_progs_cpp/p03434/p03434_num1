#include <iostream>
#include <vector>
#include <algorithm>

using namespace std;

int main() {
    int N;
    cin >> N;

    vector<int> cards(N);
    for (int i = 0; i < N; i++) {
        cin >> cards[i];
    }

    sort(cards.rbegin(), cards.rend());

    int aliceScore = 0;
    int bobScore = 0;

    for (int i = 0; i < N; i++) {
        if (i % 2 == 0) {
            aliceScore += cards[i];
        } else {
            bobScore += cards[i];
        }
    }

    cout << aliceScore - bobScore << endl;

    return 0;
}