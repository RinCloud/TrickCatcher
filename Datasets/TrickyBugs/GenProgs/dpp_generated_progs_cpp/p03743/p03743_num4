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

    int Q;
    cin >> Q;

    vector<int> q(Q);
    for (int i = 0; i < Q; i++) {
        cin >> q[i];
    }

    vector<bool> feasible(Q, true);

    int current = D;
    for (int i = 0; i < N; i++) {
        if (d[i] > current) {
            feasible[Q-1] = false;
            break;
        }
        current = min(current, abs(current - d[i]));
    }

    for (int i = Q-2; i >= 0; i--) {
        if (d[q[i]-1] <= current) {
            feasible[i] = false;
            current = min(current, abs(current - d[q[i]-1]));
        } else {
            break;
        }
    }

    for (int i = 0; i < Q; i++) {
        if (feasible[i]) {
            cout << "YES" << endl;
        } else {
            cout << "NO" << endl;
        }
    }

    return 0;
}