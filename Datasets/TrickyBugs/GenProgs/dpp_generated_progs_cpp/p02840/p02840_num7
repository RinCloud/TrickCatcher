#include <iostream>
#include <unordered_set>

using namespace std;

int main() {
    int N, X, D;
    cin >> N >> X >> D;

    unordered_set<long long> possibleSums;

    // Case when D is 0
    if (D == 0) {
        if (X == 0) {
            cout << "1\n";
        } else {
            cout << N + 1 << "\n";
        }
        return 0;
    }

    // Iterate over all possible values of S - T
    for (int i = 0; i <= N; i++) {
        long long S = 1LL * i * X + 1LL * i * (i - 1) / 2 * D;
        long long T = 1LL * (N - i) * X + 1LL * (N - i) * (N - i - 1) / 2 * D;
        possibleSums.insert(S - T);
    }

    cout << possibleSums.size() << "\n";

    return 0;
}