#include <iostream>
#include <vector>
#include <algorithm>

using namespace std;

int main() {
    int N, X;
    cin >> N >> X;

    vector<int> b(N), l(N), u(N);
    for (int i = 0; i < N; i++) {
        cin >> b[i] >> l[i] >> u[i];
    }

    long long low = 0, high = X;
    while (low < high) {
        long long mid = (low + high) / 2;
        long long A = 0, B = 0;
        for (int i = 0; i < N; i++) {
            long long score = min(1LL * X, b[i] + mid);
            A += 1LL * (score - b[i]) * u[i];
            B += 1LL * (score - b[i]) * l[i];
        }
        if (A >= B) {
            high = mid;
        } else {
            low = mid + 1;
        }
    }

    cout << low << endl;

    return 0;
}