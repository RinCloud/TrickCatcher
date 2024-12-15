#include<bits/stdc++.h>
using namespace std;

int main() {
    // Read input
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

    // Calculate the number of trains running within each section
    vector<int> trainsInSection(Q, 0);
    for (int i = 0; i < Q; i++) {
        for (int j = 0; j < M; j++) {
            if (p[i] <= L[j] && R[j] <= q[i]) {
                trainsInSection[i]++;
            }
        }
    }

    // Print the number of trains running within each section
    for (int i = 0; i < Q; i++) {
        cout << trainsInSection[i] << endl;
    }

    return 0;
}