#include <iostream>
using namespace std;

int main() {
    int A, B, C;
    cin >> A >> B >> C;
    
    bool possible = false;
    for (int i = 1; i <= A; i++) {
        if ((i * A) % B == C) {
            possible = true;
            break;
        }
    }
    
    if (possible) {
        cout << "YES" << endl;
    } else {
        cout << "NO" << endl;
    }
    
    return 0;
}