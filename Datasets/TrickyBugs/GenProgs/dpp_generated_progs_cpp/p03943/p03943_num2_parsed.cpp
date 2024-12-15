#include <iostream>
using namespace std;

int main() {
    int a, b, c;
    cin >> a >> b >> c;
    
    // check if it is possible to distribute the packs equally
    if ((a + b + c) % 2 == 0 && (a == b || b == c || a == c)) {
        cout << "Yes" << endl;
    } else {
        cout << "No" << endl;
    }
    
    return 0;
}