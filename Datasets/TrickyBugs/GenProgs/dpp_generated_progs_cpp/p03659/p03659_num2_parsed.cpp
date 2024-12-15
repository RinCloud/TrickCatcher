#include <iostream>
#include <vector>
#include <algorithm>
#include <cmath>

using namespace std;

int main() {
    int N;
    cin >> N;
    vector<int> cards(N);
    for (int i = 0; i < N; i++) {
        cin >> cards[i];
    }

    sort(cards.begin(), cards.end());

    int sumSnuke = 0;
    int sumRaccoon = 0;
    for (int i = 0; i < N; i++) {
        if (i < N / 2) {
            sumSnuke += cards[i];
        } else {
            sumRaccoon += cards[i];
        }
    }

    int ans = abs(sumSnuke - sumRaccoon);

    cout << ans << endl;

    return 0;
}