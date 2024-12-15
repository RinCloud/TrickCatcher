#include <iostream>
#include <vector>

using namespace std;

int main() {
    int N;
    cin >> N;

    vector<int> T(N);
    for (int i = 0; i < N; i++) {
        cin >> T[i];
    }

    int M;
    cin >> M;

    vector<int> P(M);
    vector<int> X(M);
    for (int i = 0; i < M; i++) {
        cin >> P[i] >> X[i];
    }

    for (int i = 0; i < M; i++) {
        int total_time = 0;
        for (int j = 0; j < N; j++) {
            if (j + 1 == P[i]) {
                total_time += X[i];
            } else {
                total_time += T[j];
            }
        }
        cout << total_time << endl;
    }

    return 0;
}