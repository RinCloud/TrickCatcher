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

    vector<int> scores(N, 0);
    for (int i = 0; i < N; i++) {
        if (i < K || T[i] != T[i - K]) {
            if (T[i] == 'r') {
                scores[i] = P;
            } else if (T[i] == 's') {
                scores[i] = R;
            } else if (T[i] == 'p') {
                scores[i] = S;
            }
        }
    }

    int total_score = 0;
    for (int i = 0; i < N; i++) {
        total_score += scores[i];
    }

    cout << total_score << endl;

    return 0;
}
