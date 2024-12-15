#include <iostream>
using namespace std;

int main() {
    int T;
    cin >> T;

    while (T--) {
        long long A, B, C, D;
        cin >> A >> B >> C >> D;

        if (B > A) {
            cout << "No" << endl;
        } else if (D >= B) {
            cout << "Yes" << endl;
        } else {
            long long remaining_juice = A % B;
            long long min_juice = A - remaining_juice;

            if (C + remaining_juice * D >= B) {
                cout << "Yes" << endl;
            } else if (C + min_juice * D >= B) {
                cout << "Yes" << endl;
            } else {
                cout << "No" << endl;
            }
        }
    }

    return 0;
}