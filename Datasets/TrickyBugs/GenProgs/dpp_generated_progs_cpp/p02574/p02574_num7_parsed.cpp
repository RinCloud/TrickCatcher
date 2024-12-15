#include <iostream>
#include <vector>

using namespace std;

int gcd(int a, int b) {
    if (b == 0) {
        return a;
    }
    return gcd(b, a % b);
}

int main() {
    int N;
    cin >> N;

    vector<int> A(N);
    for (int i = 0; i < N; i++) {
        cin >> A[i];
    }

    int pairwise_gcd = A[0];
    for (int i = 1; i < N; i++) {
        pairwise_gcd = gcd(pairwise_gcd, A[i]);
    }

    if (pairwise_gcd != 1) {
        cout << "not coprime" << endl;
        return 0;
    }

    int setwise_gcd = A[0];
    for (int i = 1; i < N; i++) {
        setwise_gcd = gcd(setwise_gcd, A[i]);
        if (setwise_gcd == 1) {
            cout << "setwise coprime" << endl;
            return 0;
        }
    }

    cout << "pairwise coprime" << endl;

    return 0;
}