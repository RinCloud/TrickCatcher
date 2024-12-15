#include <iostream>
#include <string>
#include <algorithm>

using namespace std;

bool checkCondition(const string& str, const string& pattern) {
    for (int i = 0; i <= str.length() - pattern.length(); i++) {
        bool match = true;
        for (int j = 0; j < pattern.length(); j++) {
            if (str[i + j] != pattern[j] && str[i + j] != '?') {
                match = false;
                break;
            }
        }
        if (match) {
            return true;
        }
    }
    return false;
}

string restoreString(const string& s, const string& t) {
    string restored = s;
    
    for (int i = 0; i <= s.length() - t.length(); i++) {
        bool match = true;
        for (int j = 0; j < t.length(); j++) {
            if (restored[i + j] != t[j] && restored[i + j] != '?') {
                match = false;
                break;
            }
        }
        if (match) {
            for (int j = 0; j < t.length(); j++) {
                restored[i + j] = t[j];
            }
        }
    }
    
    for (int i = 0; i < restored.length(); i++) {
        if (restored[i] == '?') {
            restored[i] = 'a'; // replace ? with a
        }
    }
    
    return restored;
}

int main() {
    string s, t;
    cin >> s >> t;
    
    bool condition1 = checkCondition(s, t);
    if (!condition1) {
        cout << "UNRESTORABLE" << endl;
        return 0;
    }
    
    sort(s.begin(), s.end()); // sort s to find the lexicographically smallest string
    
    string restored = restoreString(s, t);
    cout << restored << endl;
    
    return 0;
}