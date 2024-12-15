#include <iostream>
#include <vector>
#include <algorithm>

using namespace std;

bool checkGoodString(vector<int>& P, const vector<int>& S) {
    vector<int> X, Y;
    int highX = 0, highY = 0;
    for (int i = 0; i < P.size(); i++) {
        if (S[i] == 0) {
            X.push_back(P[i]);
            highX = max(highX, P[i]);
        } else {
            Y.push_back(P[i]);
            highY = max(highY, P[i]);
        }
        if (highX == highY) {
            return true;
        }
    }
    return false;
}

int main() {
    int N;
    cin >> N;
    vector<int> P(N);
    for (int i = 0; i < N; i++) {
        cin >> P[i];
    }

    vector<int> S(N, 0);
    for (int i = 0; i < N; i++) {
        for (int j = 0; j < i; j++) {
            if (P[j] > P[i]) {
                S[i] = 1;
                break;
            }
        }
    }

    if (!checkGoodString(P, S)) {
        cout << -1 << endl;
    } else {
        for (int i = 0; i < N; i++) {
            cout << S[i];
        }
        cout << endl;
    }

    return 0;
}