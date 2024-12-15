#include <iostream>
using namespace std;

int main() {
    int T;
    cin >> T;

    for (int i = 0; i < T; i++) {
        long long A, B, C, D;
        cin >> A >> B >> C >> D;

        if (B > A || B > C) {
            cout << "No" << endl;
            continue;
        }

        if ((A - B) % (B - C) == 0 || ((A - B) / (B - C) + 1) <= (D - 1) / (B - C)) {
            cout << "Yes" << endl;
        } else {
            cout << "No" << endl;
        }
    }

    return 0;
}