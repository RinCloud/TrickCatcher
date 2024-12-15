#include <iostream>
#include <vector>
#include <string>

using namespace std;

// Function to perform the operations on a string
string performOperations(string str) {
    string result = "";
    for (int i = 0; i < str.length(); i++) {
        if (str[i] == 'A') {
            result += "BB";
        } else if (str[i] == 'B') {
            result += "AA";
        }
    }
    return result;
}

// Function to check if a substring can be made from another substring
bool canMakeSubstring(string s, string t, int a, int b, int c, int d) {
    string sSubstr = s.substr(a - 1, b - a + 1);
    string tSubstr = t.substr(c - 1, d - c + 1);
    
    // Check if the lengths are not equal
    if (sSubstr.length() != tSubstr.length()) {
        return false;
    }
    
    // Check if the substrings can be made equal by performing the operations
    while (sSubstr != tSubstr) {
        string newSSubstr = performOperations(sSubstr);
        if (newSSubstr.length() > sSubstr.length()) {
            return false;
        }
        if (newSSubstr == tSubstr) {
            return true;
        }
        sSubstr = newSSubstr;
    }
    
    return true;
}

int main() {
    string S, T;
    int q;
    cin >> S >> T >> q;

    // Process each query
    for (int i = 0; i < q; i++) {
        int a, b, c, d;
        cin >> a >> b >> c >> d;
        
        // Check if the substring can be made from another substring
        if (canMakeSubstring(S, T, a, b, c, d)) {
            cout << "YES" << endl;
        } else {
            cout << "NO" << endl;
        }
    }

    return 0;
}