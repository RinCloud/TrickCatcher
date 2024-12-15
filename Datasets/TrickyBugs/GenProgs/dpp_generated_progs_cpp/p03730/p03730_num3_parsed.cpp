#include <iostream>
using namespace std;

int main() {
    int A, B, C;
    cin >> A >> B >> C;

    bool possible = false;
    for (int i = 0; i * A <= C; i++) {
        if ((C - i * A) % B == 0) {
            possible = true;
            break;
        }
    }

    if (possible) {
        cout << "YES" << endl;
    } else {
        cout << "NO" << endl;
    }

    return 0;
}