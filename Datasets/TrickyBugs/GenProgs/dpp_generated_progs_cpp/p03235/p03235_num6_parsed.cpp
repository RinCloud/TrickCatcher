#include <iostream>
#include <vector>
#include <algorithm>

using namespace std;

int main() {
    int N;
    cin >> N;

    vector<int> P(N);
    for (int i = 0; i < N; i++) {
        cin >> P[i];
    }

    vector<int> S(N, 0);
    for (int i = 0; i < N; i++) {
        if (P[i] != i + 1) {
            S[i] = 1;
        }
    }

    vector<int> X, Y;
    for (int i = 0; i < N; i++) {
        if (S[i] == 0) {
            X.push_back(P[i]);
        } else {
            Y.push_back(P[i]);
        }
    }

    sort(X.begin(), X.end());
    sort(Y.begin(), Y.end());

    int h = 0;
    for (int i = 0; i < N; i++) {
        if (S[i] == 0) {
            if (P[i] > X[h]) {
                cout << -1 << endl;
                return 0;
            }
            h++;
        }
    }

    for (int i = 0; i < X.size(); i++) {
        cout << "0";
    }
    for (int i = 0; i < Y.size(); i++) {
        cout << "1";
    }
    cout << endl;

    return 0;
}