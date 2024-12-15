#include<iostream>

using namespace std;

int main() {
    int A, B, C, D;
    
    cin >> A >> B >> C >> D;
    
    while (A > 0 && C > 0) {
        C -= B;
        if (C <= 0) {
            cout << "Yes" << endl;
            return 0;
        }
        A -= D;
        if (A <= 0) {
            cout << "No" << endl;
            return 0;
        }
    }
    
    return 0;
}