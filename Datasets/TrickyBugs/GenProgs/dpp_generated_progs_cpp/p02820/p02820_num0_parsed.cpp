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

    vector<int> score(N);
    for (int i = 0; i < N; i++) {
        if (T[i] == 'r') score[i] = P;
        else if (T[i] == 's') score[i] = R;
        else if (T[i] == 'p') score[i] = S;
    }

    long long total_score = 0;

    for (int i = 0; i < K; i++) {
        total_score += score[i];
    }

    for (int i = K; i < N; i++) {
        if (T[i] == T[i - K] && score[i - K] > 0) {
            score[i] = 0;
        } else {
            total_score += score[i];
        }
    }

    cout << total_score << endl;

    return 0;
}