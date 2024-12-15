#include <iostream>
using namespace std;

int main() {
    char a, b;
    cin >> a >> b;

    if (a == 'H') {
        cout << b << endl;
    } else {
        cout << (b == 'H' ? 'D' : 'H') << endl;
    }

    return 0;
}
