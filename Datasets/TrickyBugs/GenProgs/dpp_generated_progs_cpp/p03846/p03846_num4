#include <iostream>
#include <vector>
#include <algorithm>
using namespace std;
const int MOD = 1e9 + 7;

int main() {
    int N;
    cin >> N;

    vector<int> A(N);
    for (int i = 0; i < N; i++) {
        cin >> A[i];
    }

    sort(A.begin(), A.end());

    long long count = 0;
    bool possible = true;
    if (N % 2 == 0) {
        for (int i = 0; i < N; i += 2) {
            if (A[i] != i || A[i + 1] != i) {
                possible = false;
                break;
            }
        }
        if (possible) {
            count = 1;
            for (int i = 2; i <= N; i += 2) {
                count = (count * i) % MOD;
            }
        }
    } else {
        if (A[0] != 0) {
            possible = false;
        } else {
            for (int i = 1; i < N; i += 2) {
                if (A[i] != i || A[i + 1] != i) {
                    possible = false;
                    break;
                }
            }
            if (possible) {
                count = 1;
                for (int i = 3; i <= N; i += 2) {
                    count = (count * i) % MOD;
                }
            }
        }
    }

    cout << (possible ? count : 0) << endl;

    return 0;
}