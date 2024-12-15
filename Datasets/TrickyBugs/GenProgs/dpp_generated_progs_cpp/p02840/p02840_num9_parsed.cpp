#include <iostream>
#include <unordered_set>
using namespace std;

int main() {
    int N, X, D;
    cin >> N >> X >> D;

    if (D == 0) {
        if (X == 0) {
            cout << "1" << endl;
        } else {
            cout << N + 1 << endl;
        }
        return 0;
    }

    long long cnt = 0;
    unordered_set<long long> values;
    for (int k = 0; k <= N; k++) {
        long long numerator = (X * k) - (D * (k * (k - 1) / 2));
        long long denominator = k * D;

        if (denominator == 0) {
            if (numerator == 0) {
                cnt += N + 1;
            }
        } else {
            long long value = numerator / denominator;
            values.insert(value);
        }
    }

    cnt += values.size();
    cout << cnt << endl;
    return 0;
}