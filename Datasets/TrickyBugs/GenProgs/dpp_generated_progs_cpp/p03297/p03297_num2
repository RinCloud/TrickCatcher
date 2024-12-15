#include <iostream>
using namespace std;

int main() {
    int T;
    cin >> T;
    
    while(T--) {
        long long A, B, C, D;
        cin >> A >> B >> C >> D;
        
        if (B > A) {
            cout << "No" << endl;
            continue;
        }
        
        if (B + C*D < A) {
            cout << "No" << endl;
        } else {
            long long remaining = A - B;
            if (remaining % (C * D) == 0) {
                cout << "Yes" << endl;
            } else {
                cout << "No" << endl;
            }
        }
    }
    
    return 0;
}