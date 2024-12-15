#include <iostream>
using namespace std;

int main() {
    int A, B, C;
    cin >> A >> B >> C;
    
    if (A == B && B != C) {
        cout << "Yes";
    } else if (A == C && C != B) {
        cout << "Yes";
    } else if (B == C && C != A) {
        cout << "Yes";
    } else {
        cout << "No";
    }
    
    return 0;
}