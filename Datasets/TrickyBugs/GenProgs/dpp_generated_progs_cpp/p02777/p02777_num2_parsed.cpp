#include <iostream>
#include <string>
using namespace std;

int main() {
    string S, T, U;
    int A, B;
    cin >> S >> T;
    cin >> A >> B;
    cin >> U;

    if (U == S) {
        A--;
    } else if (U == T) {
        B--;
    }

    cout << A << " " << B << endl;

    return 0;
}
