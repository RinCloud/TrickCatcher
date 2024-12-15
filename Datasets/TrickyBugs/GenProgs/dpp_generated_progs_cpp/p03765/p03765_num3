#include <iostream>
#include <vector>
#include <string>
using namespace std;

// Function to check if a substring of S can be made into a substring of T
bool isSubstringPossible(const string& S, const string& T, int a, int b, int c, int d) {
    // Check if the lengths of the substrings are equal
    if (b - a + 1 != d - c + 1) {
        return false;
    }
    
    // Check if the characters in the substrings are compatible
    for (int i = a; i <= b; i++) {
        if (S[i] == 'A' && T[c + i - a] == 'B') {
            return false;
        }
        if (S[i] == 'B' && T[c + i - a] == 'A') {
            return false;
        }
    }
    
    return true;
}

int main() {
    // Read the inputs
    string S, T;
    int q;
    cin >> S >> T >> q;
    
    // Process each query
    for (int i = 0; i < q; i++) {
        int a, b, c, d;
        cin >> a >> b >> c >> d;
        
        // Check if the substring can be made into a substring of T
        if (isSubstringPossible(S, T, a - 1, b - 1, c - 1, d - 1)) {
            cout << "YES" << endl;
        } else {
            cout << "NO" << endl;
        }
    }
    
    return 0;
}