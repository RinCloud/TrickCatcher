#include <iostream>
using namespace std;

int main() {
    int A, B;
    cin >> A >> B;

    if (A == 1) {
        A = 14; // Convert the value of Ace to 14
    }
    if (B == 1) {
        B = 14; // Convert the value of Ace to 14
    }

    if (A > B) {
        cout << "Alice";
    } else if (B > A) {
        cout << "Bob";
    } else {
        cout << "Draw";
    }

    return 0;
}