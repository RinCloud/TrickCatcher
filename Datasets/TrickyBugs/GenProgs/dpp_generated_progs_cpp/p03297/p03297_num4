#include <iostream>
using namespace std;

bool canBuyJuice(long long A, long long B, long long C, long long D) {
    if (B > A) {
        return false;
    }
    if (B > C) {
        return true;
    }
    long long diff = C % B;
    if ((A - diff) % B <= D) {
        return true;
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