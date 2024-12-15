#include <iostream>
using namespace std;

int main() {
    int a, b, c;
    cin >> a >> b >> c;

    if ((a + b + c) % 2 == 0 && ((a + b + c) / 2 == a || (a + b + c) / 2 == b || (a + b + c) / 2 == c)) {
        cout << "Yes" << endl;
    } else {
        cout << "No" << endl;
    }

    return 0;
}