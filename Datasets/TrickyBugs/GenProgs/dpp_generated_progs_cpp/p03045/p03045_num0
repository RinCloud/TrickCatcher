#include <iostream>
#include <vector>
#include <algorithm>

using namespace std;

int main() {
    int N, M;
    cin >> N >> M;

    vector<int> cards(N);
    for (int i = 0; i < M; i++) {
        int X, Y, Z;
        cin >> X >> Y >> Z;
        cards[X-1] ^= Z % 2;
        cards[Y-1] ^= Z % 2;
    }

    int cost = 0;
    for (int i = 0; i < N; i++) {
        if (cards[i] == 1) {
            cost++;
            if (i < N-1) {
                cards[i+1] ^= 1;
            }
        }
    }

    cout << cost << endl;

    return 0;
}