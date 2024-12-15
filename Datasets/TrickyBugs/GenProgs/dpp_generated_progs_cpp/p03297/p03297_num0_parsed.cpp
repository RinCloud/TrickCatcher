#include <iostream>
using namespace std;

bool canBuyJuice(long long A, long long B, long long C, long long D) {
    if (A <= B) {
        return true;
    }
    if (B > C) {
        return false;
    }
    long long remainingJuice = A;
    long long requiredJuice = B;
    
    while (remainingJuice > 0) {
        if (remainingJuice <= C) {
            return true;
        }
        long long additionalJuice = remainingJuice / D;
        remainingJuice -= requiredJuice;
        remainingJuice += additionalJuice * D;
        if (remainingJuice <= (requiredJuice + additionalJuice) && remainingJuice > C) {
            return false;
        }
    }
    
    return true;
}

int main() {
    int T;
    cin >> T;
    
    while (T--) {
        long long A, B, C, D;
        cin >> A >> B >> C >> D;
        
        if (canBuyJuice(A, B, C, D)) {
            cout << "Yes" << endl;
        } else {
            cout << "No" << endl;
        }
    }
    
    return 0;
}