#include <iostream>
#include <vector>
#include <algorithm>
#include <cmath>
using namespace std;

int main() {
    int N;
    cin >> N;

    vector<long long> cards(N);
    for (int i = 0; i < N; i++) {
        cin >> cards[i];
    }

    sort(cards.rbegin(), cards.rend());

    long long sumSnuke = cards[0];
    long long sumRaccoon = 0;
    long long minDiff = abs(sumSnuke - sumRaccoon);

    for (int i = 1; i < N; i++) {
        sumRaccoon += cards[i];
        sumSnuke -= cards[i];
        minDiff = min(minDiff, abs(sumSnuke - sumRaccoon));
    }

    cout << minDiff << endl;

    return 0;
}