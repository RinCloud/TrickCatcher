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

    vector<int> score(N, 0);

    for (int i = 0; i < N; i++) {
        if (i >= K && T[i] == T[i - K]) {
            score[i] = 0;
        } else {
            if (T[i] == 'r') {
                score[i] = P;
            } else if (T[i] == 's') {
                score[i] = R;
            } else {
                score[i] = S;
            }
        }
    }

    int totalScore = 0;
    for (int i = 0; i < N; i++) {
        totalScore += score[i];
    }

    cout << totalScore << endl;

    return 0;
}