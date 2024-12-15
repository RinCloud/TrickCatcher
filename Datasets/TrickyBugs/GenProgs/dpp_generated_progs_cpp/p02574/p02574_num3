#include <iostream>
#include <vector>
#include <algorithm>

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

    int g = A[0];
    for (int i = 1; i < N; i++) {
        g = gcd(g, A[i]);
    }

    if (g == 1) {
        cout << "setwise coprime" << endl;
    } else {
        sort(A.begin(), A.end());

        for (int i = 0; i < N; i++) {
            for (int j = i + 1; j < N; j++) {
                if (gcd(A[i], A[j]) != 1) {
                    cout << "not coprime" << endl;
                    return 0;
                }
            }
        }

        cout << "pairwise coprime" << endl;
    }

    return 0;
}