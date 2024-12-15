#include <iostream>
using namespace std;

int main() {
    int A, B, C;
    cin >> A >> B >> C;

    // Check if there is at least one integer that is a multiple of A
    if (C % A == 0) {
        cout << "YES" << endl;
    } else {
        // Check all possible sums of multiples of A
        for (int i = 1; i <= B; i++) {
            int sum = C + A * i;
            if (sum % B == 0) {
                cout << "YES" << endl;
                return 0;
            }
        }
        cout << "NO" << endl;
    }

    return 0;
}