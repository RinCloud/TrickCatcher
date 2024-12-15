#include <iostream>
#include <string>

using namespace std;

string restoreString(string s, string t) {
    // Find the first occurrence of t in s
    size_t pos = s.find(t);

    // If t is not found, return UNRESTORABLE
    if (pos == string::npos) {
        return "UNRESTORABLE";
    }

    // Replace all question marks in s with the corresponding characters in t
    for (int i = 0; i < s.length(); i++) {
        if (s[i] == '?') {
            s[i] = t[i - pos];
        }
    }

    return s;
}

int main() {
    string s, t;
    cin >> s >> t;

    string result = restoreString(s, t);

    cout << result << endl;

    return 0;
}