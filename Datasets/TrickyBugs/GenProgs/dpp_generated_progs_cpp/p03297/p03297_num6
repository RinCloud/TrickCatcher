#include <iostream>
using namespace std;

bool canBuyJuice(long long A, long long B, long long C, long long D) {
    if (B > A) {
        return false;
    }

    if (B <= C) {
        return true;
    }

    if (D < B && ((A - B) % (B - D)) < C) {
        return false;
    }

    long long maxStock = A;
    while (maxStock >= B) {
        long long remaining = (maxStock - B) % (B - D);
        if (remaining <= C) {
            return true;
        }
        maxStock -= remaining + B;
    }

    return false;
}

int main() {
    int T;
    cin >> T;

    for (int i = 0; i < T; i++) {
        long long A, B, C, D;
        cin >> A >> B >> C >> D;

        if (canBuyJuice(A, B, C, D)) {
            cout << "Yes" << endl;
        } else {
            cout << "No" << endl;
        }
    }

    return 0;
}