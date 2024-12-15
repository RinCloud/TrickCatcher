#include <iostream>
#include <vector>
#include <algorithm>
#include <climits>

using namespace std;

int main() {
    int n;
    cin >> n;

    vector<int> cards(n);
    for (int i = 0; i < n; i++) {
        cin >> cards[i];
    }

    sort(cards.begin(), cards.end());

    int snukeSum = 0;
    int raccoonSum = 0;
    int minDiff = INT_MAX;

    for (int i = 1; i <= n; i++) {
        snukeSum += cards[i - 1];
        raccoonSum = 0;

        for (int j = i; j < n; j++) {
            raccoonSum += cards[j];
        }

        minDiff = min(minDiff, abs(snukeSum - raccoonSum));
    }

    cout << minDiff << endl;

    return 0;
}