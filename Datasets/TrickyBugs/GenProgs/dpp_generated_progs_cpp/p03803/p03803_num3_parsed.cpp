#include <iostream>
using namespace std;

int main() {
    int A, B;
    cin >> A >> B;

    if (A == B) {
        cout << "Draw" << endl;
    } else if (A == 1 || (B != 1 && A > B)) {
        cout << "Alice" << endl;
    } else {
        cout << "Bob" << endl;
    }

    return 0;
}