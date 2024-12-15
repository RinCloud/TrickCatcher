#include <iostream>
#include <vector>
#include <algorithm>

using namespace std;

int main() {
    int N;
    cin >> N;
    vector<int> A(N), B(N);
    for (int i = 0; i < N; i++) {
        cin >> A[i] >> B[i];
    }
    vector<int> C(N + 1);
    for (int i = 0; i < N + 1; i++) {
        cin >> C[i];
    }
    int Q;
    cin >> Q;
    for (int i = 0; i < Q; i++) {
        int D, E;
        cin >> D >> E;
        int maxScore = 0;
        if (C[0] < E) {
            int side = 0;
            for (int j = 0; j < N; j++) {
                if (D >= A[j] && C[j + 1] >= D && B[j] <= E) {
                    maxScore++;
                    side = max(side, 1);
                }
            }
            if (side) {
                maxScore++;
            }
        }
        cout << maxScore << endl;
    }
    return 0;
}