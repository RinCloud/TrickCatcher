#include <iostream>
#include <vector>
#include <algorithm>

using namespace std;

int main() {
    int N, A, B, C;
    cin >> N >> A >> B >> C;

    vector<int> lengths(N);
    for (int i = 0; i < N; i++) {
        cin >> lengths[i];
    }

    int minMP = INT_MAX;

    for (int i = 0; i < (1 << N); i++) {
        int mp = 0;
        int sumA = 0, sumB = 0, sumC = 0;
        int countA = 0, countB = 0, countC = 0;

        for (int j = 0; j < N; j++) {
            if ((1 << j) & i) {
                if (lengths[j] == A) {
                    countA++;
                } else if (lengths[j] == B) {
                    countB++;
                } else if (lengths[j] == C) {
                    countC++;
                } else if (lengths[j] < A) {
                    sumA += lengths[j];
                } else if (lengths[j] < B) {
                    sumB += lengths[j];
                } else if (lengths[j] < C) {
                    sumC += lengths[j];
                }
            } else {
                mp += 10;
            }
        }

        if (countA > 0 && countB > 0 && countC > 0) {
            mp += abs(sumA - (A * countA));
            mp += abs(sumB - (B * countB));
            mp += abs(sumC - (C * countC));

            minMP = min(minMP, mp);
        }
    }

    cout << minMP << endl;

    return 0;
}