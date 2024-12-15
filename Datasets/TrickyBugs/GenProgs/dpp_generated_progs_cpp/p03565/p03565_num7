#include <iostream>
#include <string>

using namespace std;

bool isSubstring(string s, string sub) {
    int n = s.length();
    int m = sub.length();
    
    for (int i = 0; i <= n - m; i++) {
        int j = 0;
        for (; j < m; j++) {
            if (s[i + j] != sub[j] && s[i + j] != '?')
                break;
        }
        if (j == m)
            return true;
    }
    
    return false;
}

string restoreString(string s, string sub) {
    int n = s.length();
    int m = sub.length();
    int index = -1;
    
    for (int i = 0; i <= n - m; i++) {
        int j = 0;
        for (; j < m; j++) {
            if (s[i + j] != sub[j] && s[i + j] != '?')
                break;
        }
        if (j == m) {
            index = i;
            break;
        }
    }
    
    if (index == -1)
        return "UNRESTORABLE";
    
    for (int i = 0; i < n; i++) {
        if (i >= index && i < index + m) {
            if (s[i] == '?') {
                s[i] = sub[i - index];
            }
        } else {
            if (s[i] == '?') {
                s[i] = 'a';
            }
        }
    }
    
    return s;
}

int main() {
    string s, sub;
    cin >> s >> sub;
    
    cout << restoreString(s, sub) << endl;
    
    return 0;
}