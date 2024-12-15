#include <iostream>
using namespace std;

int main() {
    int A, B;
    cin >> A >> B;

    if (A == 1) {
        if (B == 1) {
            cout << "Draw";
        } else {
            cout << "Alice";
        }
    } else if (B == 1) {
        cout << "Bob";
    } else if (A > B) {
        cout << "Alice";
    } else if (B > A) {
        cout << "Bob";
    } else {
        cout << "Draw";
    }

    return 0;
}