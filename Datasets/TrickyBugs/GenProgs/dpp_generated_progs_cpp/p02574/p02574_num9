#include <iostream>
#include <vector>

using namespace std;

int gcd(int a, int b) {
    if (b == 0)
        return a;
    return gcd(b, a % b);
}

int main() {
    int N;
    cin >> N;

    vector<int> A(N);
    for (int i = 0; i < N; i++) {
        cin >> A[i];
    }

    // Check pairwise coprime
    bool isPairwiseCoprime = true;
    for (int i = 0; i < N - 1; i++) {
        for (int j = i + 1; j < N; j++) {
            if (gcd(A[i], A[j]) != 1) {
                isPairwiseCoprime = false;
                break;
            }
        }
        if (!isPairwiseCoprime) {
            break;
        }
    }

    // Check setwise coprime
    int gcdOfAll = A[0];
    bool isSetwiseCoprime = true;
    for (int i = 1; i < N; i++) {
        gcdOfAll = gcd(gcdOfAll, A[i]);
        if (gcdOfAll == 1) {
            isSetwiseCoprime = false;
            break;
        }
    }

    if (isPairwiseCoprime) {
        cout << "pairwise coprime" << endl;
    } else if (isSetwiseCoprime) {
        cout << "setwise coprime" << endl;
    } else {
        cout << "not coprime" << endl;
    }

    return 0;
}