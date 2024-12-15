#include <iostream>
#include <vector>
using namespace std;

int main() {
    int N, K;
    cin >> N >> K;
    int R, S, P;
    cin >> R >> S >> P;
    string T;
    cin >> T;

    vector<int> score(N);
    for (int i = 0; i < N; i++) {
        if (T[i] == 'r') {
            score[i] = P;
        } else if (T[i] == 's') {
            score[i] = R;
        } else if (T[i] == 'p') {
            score[i] = S;
        }
    }

    int maxScore = 0;
    for (int i = 0; i < N; i++) {
        if (i >= K && T[i] == T[i - K] && score[i - K] > 0) {
            score[i] = 0;
        }
        maxScore += score[i];
    }

    cout << maxScore << endl;

    return 0;
}