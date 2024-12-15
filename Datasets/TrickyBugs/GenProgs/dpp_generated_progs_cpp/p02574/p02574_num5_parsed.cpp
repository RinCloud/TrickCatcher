#include <iostream>
#include <vector>
#include <algorithm>

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

    int G = A[0];
    for (int i = 1; i < N; i++) {
        G = gcd(G, A[i]);
    }

    if (G != 1) {
        cout << "not coprime" << endl;
        return 0;
    }

    vector<bool> pairwise(N, true);
    for (int i = 0; i < N - 1; i++) {
        for (int j = i + 1; j < N; j++) {
            if (gcd(A[i], A[j]) != 1) {
                pairwise[i] = pairwise[j] = false;
            }
        }
    }

    if (all_of(pairwise.begin(), pairwise.end(), [](bool x){ return x; })) {
        cout << "pairwise coprime" << endl;
    } else {
        cout << "setwise coprime" << endl;
    }

    return 0;
}