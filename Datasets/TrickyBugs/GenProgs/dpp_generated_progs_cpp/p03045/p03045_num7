#include <iostream>
#include <vector>
using namespace std;

int main() {
    int N, M;
    cin >> N >> M;

    vector<int> cards(N + 1, 0);

    for (int i = 1; i <= M; i++) {
        int X, Y, Z;
        cin >> X >> Y >> Z;

        if (cards[X] != 0) {
            cards[Y] = Z - cards[X];
        } else if (cards[Y] != 0) {
            cards[X] = Z - cards[Y];
        } else {
            cards[X] = Z;
        }
    }

    int cost = 0;

    for (int i = 1; i <= N; i++) {
        if (cards[i] == 0) {
            cost++;
            cards[i] = 1; // Guessing 1 since it can be either 1 or 2
        }
    }

    cout << cost << endl;

    return 0;
}