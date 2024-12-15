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

    int score = 0;

    for (int i = 0; i < N; i++) {
        if (i >= K && T[i] == T[i - K]) {
            T[i] = 'x';
        } else {
            if (T[i] == 'r') {
                score += P;
            } else if (T[i] == 's') {
                score += R;
            } else {
                score += S;
            }
        }
    }

    cout << score << endl;

    return 0;
}