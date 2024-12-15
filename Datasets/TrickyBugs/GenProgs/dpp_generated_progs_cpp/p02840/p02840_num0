#include <iostream>
#include <unordered_set>

using namespace std;

int main() {
    int N, X, D;
    cin >> N >> X >> D;

    if (D == 0) {
        if (X == 0) {
            cout << 1 << endl;
        } else {
            cout << N + 1 << endl;
        }
        return 0;
    }

    unordered_set<long long> possibleSums;
    for (int i = 0; i <= N; ++i) {
        long long S = (long long) X * (N - i) + (long long) D * i;
        possibleSums.insert(S);
    }

    cout << possibleSums.size() << endl;

    return 0;
}