#include <iostream>
#include <string>

using namespace std;

int main() {
    int N, A, B, C, D;
    string S;
    
    cin >> N >> A >> B >> C >> D >> S;
    
    bool possible = true;
    
    // Check if rocks are present between A and B
    for (int i = A; i < B; i++) {
        if (S[i - 1] == '#' && S[i] == '#') {
            possible = false;
            break;
        }
    }
    
    // Check if rocks are present between C and D
    for (int i = C; i < D; i++) {
        if (S[i - 1] == '#' && S[i] == '#') {
            possible = false;
            break;
        }
    }
    
    // Check if Snuke can reach C before Fnuke reaches B
    for (int i = B; i <= D; i++) {
        if (S[i - 2] == '.' && S[i - 1] == '.' && S[i] == '.') {
            possible = false;
            break;
        }
    }
    
    if (possible) {
        cout << "Yes" << endl;
    } else {
        cout << "No" << endl;
    }
    
    return 0;
}