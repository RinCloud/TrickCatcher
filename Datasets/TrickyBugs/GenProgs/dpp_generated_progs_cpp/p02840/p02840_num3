#include <iostream>
#include <unordered_set>

using namespace std;

int main() {
    int N, X, D;
    cin >> N >> X >> D;

    unordered_set<int> possibleValues;

    if (D == 0) {
        if (X == 0) {
            cout << "1" << endl;
        } else {
            cout << N + 1 << endl;
        }
    } else {
        for (int i = 0; i <= N; i++) {
            int S = X * i;
            int T = (N - i) * (N - i - 1) * D / 2 + X * (N - i);

            possibleValues.insert(S - T);
        }

        cout << possibleValues.size() << endl;
    }

    return 0;
}