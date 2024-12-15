#include <iostream>
using namespace std;

int main() {
    int T;
    cin >> T;
    
    for (int i = 0; i < T; i++) {
        long long A, B, C, D;
        cin >> A >> B >> C >> D;
        
        if (B > A) {
            cout << "No" << endl;
        } else if (B <= C * D) {
            cout << "Yes" << endl;
        } else {
            long long remaining = A % (B - C * D);
            if (remaining <= C * D) {
                cout << "Yes" << endl;
            } else {
                cout << "No" << endl;
            }
        }
    }
    
    return 0;
}