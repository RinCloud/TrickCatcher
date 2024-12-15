#include <iostream>
#include <string>
using namespace std;

int main() {
    int N, A, B, C, D;
    string S;
    cin >> N >> A >> B >> C >> D >> S;
    
    bool possible = true;
    
    // Check if there is a rock between A and B
    for (int i = A + 1; i <= B; i++) {
        if (S[i - 1] == '#') {
            possible = false;
            break;
        }
    }
    
    // Check if there is a rock between C and D
    for (int i = C + 1; i <= D; i++) {
        if (S[i - 1] == '#') {
            possible = false;
            break;
        }
    }
    
    // Check if D is reachable from C
    if (C < D) {
        bool hasEmptySquare = false;
        for (int i = C; i <= D; i++) {
            if (S[i - 1] == '.') {
                hasEmptySquare = true;
                break;
            }
        }
        if (!hasEmptySquare) {
            possible = false;
        }
    }
    
    // Check if B is reachable from A
    if (A < B) {
        bool hasEmptySquare = false;
        for (int i = A; i <= B; i++) {
            if (S[i - 1] == '.') {
                hasEmptySquare = true;
                break;
            }
        }
        if (!hasEmptySquare) {
            possible = false;
        }
    }
    
    if (possible) {
        cout << "Yes" << endl;
    } else {
        cout << "No" << endl;
    }
    
    return 0;
}