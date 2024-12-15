#include <iostream>
#include <unordered_set>
#include <vector>

using namespace std;

int main() {
    int N, X, D;
    cin >> N >> X >> D;

    // If D is 0, all the elements in the sequence will be the same
    if (D == 0) {
        cout << 1 << endl;
        return 0;
    }

    // If X is 0, the difference of any two elements will be a possible value
    if (X == 0) {
        cout << N + 1 << endl;
        return 0;
    }

    // Store the possible values of S - T in a set
    unordered_set<long long> values;
    values.insert(0); // Include the case where Takahashi takes no elements

    // Calculate the number of elements taken by Takahashi
    int takahashiElements = -(X / D);

    // For each possible number of elements taken by Takahashi
    for (int i = takahashiElements - 1; i <= takahashiElements + 1; i++) {
        if (i == 0) continue; // Skip the case where Takahashi takes no elements

        long long s = 1LL * N * (N - 1) / 2; // Sum of 1 + 2 + ... + (N-1)
        long long t = 1LL * i * (2 * X + (i - 1) * D) / 2; // Sum of the sequence taken by Takahashi

        // Calculate the difference S - T and add it to the set
        values.insert(s - t);
    }

    cout << values.size() << endl;

    return 0;
}