#include <iostream>
#include <vector>
#include <algorithm>
using namespace std;

// Function to perform the first operation on string s
string performOperation(string s) {
    string newString = "";
    for (char c : s) {
        if (c == 'A') {
            newString += "BB";
        } else if (c == 'B') {
            newString += "AA";
        }
    }
    return newString;
}

// Function to perform the second operation on string s
string removeSubstring(string s, string substring) {
    string newString = "";
    int n = s.length();
    int m = substring.length();

    for (int i = 0; i < n; i++) {
        // If the substring is found at position i, skip the next m-1 characters
        if (i + m <= n && s.substr(i, m) == substring) {
            i += m - 1;
        } else {
            newString += s[i];
        }
    }
    return newString;
}

// Function to check if a substring of s can be made into a substring of t
bool isValidSubstring(string s, string t, int a, int b, int c, int d) {
    string substringS = s.substr(a - 1, b - a + 1);
    string substringT = t.substr(c - 1, d - c + 1);
    
    while (substringS != substringT) {
        string newSubstringS = performOperation(substringS);
        if (newSubstringS.length() >= substringS.length()) {
            return false;
        }
        substringS = newSubstringS;
    }
    
    return true;
}

int main() {
    string s, t;
    int q;
    cin >> s >> t >> q;
    
    for (int i = 0; i < q; i++) {
        int a, b, c, d;
        cin >> a >> b >> c >> d;
        
        bool isValid = isValidSubstring(s, t, a, b, c, d);
        if (isValid) {
            cout << "YES" << endl;
        } else {
            cout << "NO" << endl;
        }
    }
    
    return 0;
}