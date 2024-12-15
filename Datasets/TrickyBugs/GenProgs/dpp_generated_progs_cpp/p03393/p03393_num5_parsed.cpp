#include <iostream>
#include <string>
using namespace std;

string getNextDiverseWord(string s) {
    int n = s.length();
    if (n == 26) {
        return "-1"; // No next diverse word exists
    }
    
    int alphabet[26] = {0}; // array to keep track of each letter
    
    // Mark the letters in the current word as used
    for (int i = 0; i < n; i++) {
        alphabet[s[i] - 'a'] = 1;
    }
    
    // Find the first unused letter
    char nextLetter;
    for (int i = 0; i < 26; i++) {
        if (alphabet[i] == 0) {
            nextLetter = 'a' + i;
            break;
        }
    }
    
    return s + nextLetter;
}

int main() {
    string S;
    cin >> S;
    
    string nextDiverseWord = getNextDiverseWord(S);
    cout << nextDiverseWord << endl;
    
    return 0;
}