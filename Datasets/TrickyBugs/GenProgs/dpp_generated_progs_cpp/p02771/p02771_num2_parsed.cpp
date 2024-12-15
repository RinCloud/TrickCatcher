#include <iostream>
using namespace std;

int main() {
    int A, B, C;
    cin >> A >> B >> C;
    
    if (A == B && A != C) {
        cout << "Yes";
    } else if (A == C && A != B) {
        cout << "Yes";
    } else if (B == C && B != A) {
        cout << "Yes";
    } else {
        cout << "No";
    }
    
    return 0;
}