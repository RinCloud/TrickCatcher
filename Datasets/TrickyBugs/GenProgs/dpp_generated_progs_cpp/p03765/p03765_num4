#include <iostream>
#include <vector>
using namespace std;

bool canBeConverted(string S, string T, int a, int b, int c, int d) {
    int n = b - a + 1;
    int m = d - c + 1;

    if (n != m) {
        return false;
    }

    vector<int> freqS(2), freqT(2);
    for (int i = a - 1; i <= b - 1; i++) {
        freqS[S[i] - 'A']++;
    }
    for (int i = c - 1; i <= d - 1; i++) {
        freqT[T[i] - 'A']++;
    }

    if (freqS[0] != freqT[0] || freqS[1] != freqT[1]) {
        return false;
    }

    for (int i = a - 1; i <= b - 1; i++) {
        if (S[i] == 'A' && T[i] == 'B') {
            return false;
        }
        if (S[i] == 'B' && T[i] == 'A') {
            return false;
        }
    }

    return true;
}

int main() {
    string S, T;
    int q;
    cin >> S >> T >> q;

    for (int i = 0; i < q; i++) {
        int a, b, c, d;
        cin >> a >> b >> c >> d;

        if (canBeConverted(S, T, a, b, c, d)) {
            cout << "YES" << endl;
        } else {
            cout << "NO" << endl;
        }
    }

    return 0;
}