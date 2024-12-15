#include <iostream>

using namespace std;

int main() {
    int X, A, B;
    cin >> X >> A >> B;

    if (B <= A) {
        cout << "delicious";
    } else if (B <= A + X) {
        cout << "safe";
    } else {
        cout << "dangerous";
    }

    return 0;
}