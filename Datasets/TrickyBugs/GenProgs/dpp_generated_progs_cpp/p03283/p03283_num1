#include <iostream>
#include <vector>

using namespace std;

int main() {
    int N, M, Q;
    cin >> N >> M >> Q;

    vector<int> L(M), R(M);
    for (int i = 0; i < M; i++) {
        cin >> L[i] >> R[i];
    }

    vector<int> p(Q), q(Q);
    for (int i = 0; i < Q; i++) {
        cin >> p[i] >> q[i];
    }

    vector<int> count(Q, 0);
    for (int i = 0; i < M; i++) {
        for (int j = 0; j < Q; j++) {
            if (p[j] <= L[i] && R[i] <= q[j]) {
                count[j]++;
            }
        }
    }

    for (int i = 0; i < Q; i++) {
        cout << count[i] << endl;
    }

    return 0;
}