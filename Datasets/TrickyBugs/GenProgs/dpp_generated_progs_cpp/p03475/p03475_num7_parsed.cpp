#include <iostream>
#include <vector>

using namespace std;

int main() {
    int N;
    cin >> N;

    vector<int> C(N - 1), S(N - 1), F(N - 1);
    for (int i = 0; i < N - 1; i++) {
        cin >> C[i] >> S[i] >> F[i];
    }

    vector<int> times(N);
    for (int i = 0; i < N - 1; i++) {
        times[i] = S[i] + C[i];
        for (int j = i + 1; j < N - 1; j++) {
            if (times[i] < S[j]) {
                times[i] = S[j];
            } else if (times[i] % F[j] != 0) {
                times[i] = ((times[i] / F[j]) + 1) * F[j];
            }
            times[i] += C[j];
        }
    }
    times[N - 1] = 0;

    for (int i = 0; i < N; i++) {
        cout << times[i] << endl;
    }

    return 0;
}