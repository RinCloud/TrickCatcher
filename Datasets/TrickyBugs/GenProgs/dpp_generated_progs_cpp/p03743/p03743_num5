#include <iostream>
#include <vector>

using namespace std;

int main() {
    int N, D;
    cin >> N >> D;

    vector<int> d(N);
    for (int i = 0; i < N; i++) {
        cin >> d[i];
    }

    vector<int> prefix(N + 1);
    prefix[0] = D;
    for (int i = 0; i < N; i++) {
        if (prefix[i] <= d[i]) {
            prefix[i + 1] = prefix[i];
        } else {
            prefix[i + 1] = min(prefix[i] % d[i], d[i] - prefix[i] % d[i]);
        }
    }

    int Q;
    cin >> Q;

    for (int i = 0; i < Q; i++) {
        int q;
        cin >> q;
        if (prefix[q - 1] == 0) {
            cout << "NO" << endl;
        } else {
            cout << "YES" << endl;
        }
    }

    return 0;
}