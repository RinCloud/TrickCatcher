#include <iostream>
#include <vector>
using namespace std;

// Function to check if a substring of S can be constructed to T
bool canConstructSubstring(string S, string T, int a, int b, int c, int d) {
    // Check the lengths of the substrings
    int lenS = b - a + 1;
    int lenT = d - c + 1;

    // If the lengths are not equal, return false
    if (lenS != lenT) {
        return false;
    }

    // Iterate through the substrings
    for (int i = a; i <= b; i++) {
        char charS = S[i];
        char charT = T[i - a + c];

        // If the characters are not equal or both are 'A', return false
        if ((charS != charT) || (charS == 'A' && charT == 'A')) {
            return false;
        }
    }

    // If all characters match, return true
    return true;
}

int main() {
    // Read input
    string S, T;
    int q;
    cin >> S >> T >> q;
    
    vector<int> a(q), b(q), c(q), d(q);
    for (int i = 0; i < q; i++) {
        cin >> a[i] >> b[i] >> c[i] >> d[i];
    }

    // Process each query
    for (int i = 0; i < q; i++) {
        // Check if substring can be constructed
        if (canConstructSubstring(S, T, a[i] - 1, b[i] - 1, c[i] - 1, d[i] - 1)) {
            cout << "YES" << endl;
        } else {
            cout << "NO" << endl;
        }
    }

    return 0;
}