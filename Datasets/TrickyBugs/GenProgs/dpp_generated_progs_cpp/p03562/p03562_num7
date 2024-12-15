#include <iostream>
#include <vector>
#include <unordered_set>
using namespace std;

const int MOD = 998244353;

int main() {
    int N, X;
    cin >> N >> X;

    vector<int> A(N);
    for (int i = 0; i < N; i++) {
        cin >> A[i];
    }

    unordered_set<int> values;
    values.insert(X);

    for (int i = 0; i < N; i++) {
        unordered_set<int> next_values;
        for (int value : values) {
            next_values.insert(value);

            int double_value = value * 2;
            if (double_value <= X) {
                next_values.insert(double_value);
            }

            int xor_value = value ^ A[i];
            if (xor_value <= X) {
                next_values.insert(xor_value);
            }
        }
        values = next_values;
    }

    cout << (values.size() % MOD) << endl;

    return 0;
}