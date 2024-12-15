#include <iostream>
#include <string>

using namespace std;

bool is_substring(string s, string t) {
    for (int i = 0; i <= s.length() - t.length(); i++) {
        bool found = true;
        for (int j = 0; j < t.length(); j++) {
            if (s[i + j] != t[j] && s[i + j] != '?') {
                found = false;
                break;
            }
        }
        if (found) {
            return true;
        }
    }
    return false;
}

string restore_string(string s, string t) {
    for (int i = s.length() - t.length(); i >= 0; i--) {
        bool valid = true;
        for (int j = 0; j < t.length(); j++) {
            if (s[i + j] != t[j] && s[i + j] != '?') {
                valid = false;
                break;
            }
        }
        if (valid) {
            for (int j = 0; j < t.length(); j++) {
                s[i + j] = t[j];
            }
            for (int j = 0; j < s.length(); j++) {
                if (s[j] == '?') {
                    s[j] = 'a';
                }
            }
            return s;
        }
    }
    return "UNRESTORABLE";
}

int main() {
    string s, t;
    cin >> s >> t;
    
    if (!is_substring(s, t)) {
        cout << "UNRESTORABLE" << endl;
    } else {
        cout << restore_string(s, t) << endl;
    }
    
    return 0;
}