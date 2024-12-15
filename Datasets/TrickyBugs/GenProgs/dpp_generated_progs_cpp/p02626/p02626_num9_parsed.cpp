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

    long long sum = 0;
    for (int i = 0; i < N; i++) {
        sum += piles[i];
    }

    long long max_pile = *max_element(piles.begin(), piles.end());

    if (max_pile > sum - max_pile || (sum - max_pile) % 2 != 0) {
        cout << -1 << endl;
    } else {
        cout << (sum - max_pile) / 2 << endl;
    }

    return 0;
}