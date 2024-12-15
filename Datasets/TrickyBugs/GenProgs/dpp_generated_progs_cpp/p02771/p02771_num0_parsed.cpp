#include <iostream>
using namespace std;

int main() {
    int A, B, C;
    cin >> A >> B >> C;

    if (A == B && B != C) {
        cout << "Yes" << endl;
    } else if (A == C && C != B) {
        cout << "Yes" << endl;
    } else if (B == C && C != A) {
        cout << "Yes" << endl;
    } else {
        cout << "No" << endl;
    }

    return 0;
}