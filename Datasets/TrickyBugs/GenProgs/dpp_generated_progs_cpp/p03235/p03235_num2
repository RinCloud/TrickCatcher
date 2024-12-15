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

    vector<int> S(N);
    for (int i = 0; i < N; i++) {
        if (P[i] > i + 1) {
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

    if (X.size() != Y.size()) {
        cout << -1 << endl;
    } else {
        string goodString = "";
        for (int i = 0; i < N; i++) {
            if (S[i] == 0) {
                goodString += '0';
            } else {
                goodString += '1';
            }
        }
        cout << goodString << endl;
    }

    return 0;
}