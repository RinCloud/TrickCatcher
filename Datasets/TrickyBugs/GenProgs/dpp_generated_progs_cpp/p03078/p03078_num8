#include <iostream>
#include <vector>
#include <algorithm>

using namespace std;

int main() {
    int X, Y, Z, K;
    cin >> X >> Y >> Z >> K;

    vector<long long> A(X);
    vector<long long> B(Y);
    vector<long long> C(Z);

    for (int i = 0; i < X; i++) {
        cin >> A[i];
    }

    for (int i = 0; i < Y; i++) {
        cin >> B[i];
    }

    for (int i = 0; i < Z; i++) {
        cin >> C[i];
    }

    vector<long long> sums;

    for (int i = 0; i < X; i++) {
        for (int j = 0; j < Y; j++) {
            for (int k = 0; k < Z; k++) {
                sums.push_back(A[i] + B[j] + C[k]);
            }
        }
    }

    sort(sums.rbegin(), sums.rend());

    for (int i = 0; i < K; i++) {
        cout << sums[i] << endl;
    }

    return 0;
}