#include <iostream>
#include <string>

using namespace std;

bool checkSubString(string S, string T) {
    // Iterate over S to find substring T
    for (int i = 0; i <= S.length() - T.length(); i++) {
        int j;
        // Check if substring S[i:i+T.length()) matches with T
        for (j = 0; j < T.length(); j++) {
            if (S[i + j] != '?' && S[i + j] != T[j]) {
                break;
            }
        }
        // If all characters of T match with S[i:i+T.length()), return true
        if (j == T.length()) {
            return true;
        }
    }
    return false;
}

string restoreString(string S, string T) {
    // Try to restore the string by replacing '?' with characters from T
    for (int i = 0; i < S.length() - T.length() + 1; i++) {
        bool possible = true;
        string restored = S;
        // Replace '?' with characters from T
        for (int j = 0; j < T.length(); j++) {
            if (restored[i + j] == '?') {
                restored[i + j] = T[j];
            } else if (restored[i + j] != T[j]) {
                possible = false;
                break;
            }
        }
        // If restoration is possible, return the restored string
        if (possible) {
            // Replace remaining '?' with 'a' to make it the lexicographically smallest string
            for (int k = 0; k < restored.length(); k++) {
                if (restored[k] == '?') {
                    restored[k] = 'a';
                }
            }
            return restored;
        }
    }
    // If restoration is not possible, return "UNRESTORABLE"
    return "UNRESTORABLE";
}

int main() {
    string S, T;
    
    // Read input
    cin >> S >> T;
    
    // Check if S contains T as a contiguous substring
    if (checkSubString(S, T)) {
        // Restore and print the string
        cout << restoreString(S, T) << endl;
    } else {
        // Print "UNRESTORABLE"
        cout << "UNRESTORABLE" << endl;
    }
    
    return 0;
}
