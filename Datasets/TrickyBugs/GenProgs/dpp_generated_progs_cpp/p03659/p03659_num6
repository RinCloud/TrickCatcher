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

    sort(cards.begin(), cards.end());

    int sum1 = 0;
    int sum2 = 0;

    for (int i = 0; i < N; i++) {
        if (i < N / 2) {
            sum1 += cards[i];
        } else {
            sum2 += cards[i];
        }
    }

    int diff = abs(sum1 - sum2);
    cout << diff << endl;

    return 0;
}