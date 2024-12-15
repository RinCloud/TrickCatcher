#include <iostream>
#include <vector>
#include <algorithm>

using namespace std;

int main() {
    int N, K;
    cin >> N >> K;

    int R, S, P;
    cin >> R >> S >> P;

    string T;
    cin >> T;

    vector<int> scores(N);

    for (int i = 0; i < N; i++) {
        if (i < K || T[i] != T[i - K])
        {
            if (T[i] == 'r')
                scores[i] = P;
            else if (T[i] == 's')
                scores[i] = R;
            else if (T[i] == 'p')
                scores[i] = S;
        }
    }

    int totalScore = 0;
    for (int score : scores) {
        totalScore += score;
    }

    cout << totalScore << endl;

    return 0;
}