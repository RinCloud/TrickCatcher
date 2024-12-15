#include <iostream>

using namespace std;

int main() {
    int a, b, c;
    cin >> a >> b >> c;

    if ((a + b + c) % 2 == 0 && (a == b || b == c || a == c)) {
        cout << "Yes";
    } else {
        cout << "No";
    }

    return 0;
}