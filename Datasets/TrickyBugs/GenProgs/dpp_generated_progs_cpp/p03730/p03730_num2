#include <iostream>
using namespace std;

int main() {
    int A, B, C;
    cin >> A >> B >> C;

    // Check if C is congruent to any multiple of A modulo B
    for (int i = 0; i <= B; i++) {
        if ((C + (i * A)) % B == 0) {
            cout << "YES" << endl;
            return 0;
        }
    }

    cout << "NO" << endl;
    return 0;
}