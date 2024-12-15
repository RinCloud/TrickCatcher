#include <iostream>
#include <string>
using namespace std;

bool isPossible(int N, int A, int B, int C, int D, string S) {
    // Check condition 1: C can be reached from A
    bool possible = false;
    for (int i = A + 1; i <= C; i++) {
        if (S[i - 1] == '.' && S[i] == '.') {
            possible = true;
            break;
        }
    }
    if (!possible) {
        return false;
    }
    
    // Check condition 2: D can be reached from B
    for (int i = B + 1; i <= D; i++) {
        if (S[i - 1] == '.' && S[i] == '.') {
            possible = true;
            break;
        }
    }
    return possible;
}

int main() {
    int N, A, B, C, D;
    string S;
    cin >> N >> A >> B >> C >> D >> S;
    
    if (isPossible(N, A, B, C, D, S)) {
        cout << "Yes" << endl;
    } else {
        cout << "No" << endl;
    }
    
    return 0;
}