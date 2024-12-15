#include <iostream>
#include <vector>
#include <algorithm>

using namespace std;

int main() {
    int N;
    cin >> N;

    vector<long long> piles(N);
    for (int i = 0; i < N; i++) {
        cin >> piles[i];
    }

    sort(piles.begin(), piles.end());

    long long total = 0;
    for (int i = 1; i < N - 1; i++) {
        total += piles[i];
    }

    long long result = piles[N - 1] - total;
    if (result >= 0 && result < piles[0]) {
        cout << result << endl;
    } else {
        cout << -1 << endl;
    }

    return 0;
}