#include <iostream>
#include <vector>
#include <algorithm>

using namespace std;

bool goodStringExists(int N, vector<int>& P) {
    vector<int> S(N);
    for (int i = 0; i < N; i++) {
        S[P[i] - 1] = (i < N / 2) ? 0 : 1;
    }
    int count0 = 0, count1 = 0;
    for (int i = 0; i < N; i++) {
        if (S[i] == 0)
            count0++;
        else
            count1++;
        if (count0 == count1)
            return true;
    }
    return false;
}

void lexicographicallySmallest(int N, vector<int>& P) {
    vector<int> S(N);
    vector<int> X, Y;
    for (int i = 0; i < N; i++) {
        S[P[i] - 1] = (i < N / 2) ? 0 : 1;
    }
    int count0 = 0, count1 = 0;
    for (int i = 0; i < N; i++) {
        if (S[i] == 0) {
            X.push_back(P[i]);
            count0++;
        }
        else {
            Y.push_back(P[i]);
            count1++;
        }
        if (count0 == count1) {
            cout << "0";
            for (int j = 0; j < X.size(); j++) {
                cout << "0";
            }
            for (int j = 0; j < Y.size(); j++) {
                cout << "1";
            }
            return;
        }
    }
    cout << "-1";
}

int main() {
    int N;
    cin >> N;
    vector<int> P(N);
    for (int i = 0; i < N; i++) {
        cin >> P[i];
    }
    if (goodStringExists(N, P)) {
        lexicographicallySmallest(N, P);
    }
    else {
        cout << "-1";
    }
    return 0;
}