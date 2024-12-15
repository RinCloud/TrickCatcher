#include <iostream>
#include <vector>
#include <unordered_set>

using namespace std;

int main() {
    int N, X, D;
    cin >> N >> X >> D;

    // If D is zero, there is only one possible value of S - T, which is X.
    if (D == 0) {
        cout << 1 << endl;
        return 0;
    }

    // Store the possible values of S - T in an unordered set.
    unordered_set<long long> possibleValues;

    // Iterate through all possible lengths of Takahashi's sequence.
    for (int length = 0; length <= N; length++) {
        // Calculate the sum of Takahashi's sequence.
        long long sumTakahashi = 1LL * (2 * X + (length - 1) * D) * length / 2;

        // Calculate the sum of Aoki's sequence.
        long long sumAoki = (1LL * N * X - sumTakahashi) / (N - length);

        // Calculate the difference S - T.
        long long difference = sumTakahashi - sumAoki;

        // Add the difference to the set of possible values.
        possibleValues.insert(difference);
    }

    // Output the number of unique possible values of S - T.
    cout << possibleValues.size() << endl;

    return 0;
}