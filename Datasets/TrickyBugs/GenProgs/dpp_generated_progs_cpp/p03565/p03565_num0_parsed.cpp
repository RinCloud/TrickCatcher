#include <iostream>
#include <string>
#include <algorithm>

using namespace std;

int main() {
    string s, t;
    cin >> s >> t;

    int n = s.length();
    int m = t.length();

    int index = -1;
    for (int i = 0; i <= n - m; i++) {
        bool valid = true;
        for (int j = 0; j < m; j++) {
            if (s[i + j] != '?' && s[i + j] != t[j]) {
                valid = false;
                break;
            }
        }
        if (valid) {
            index = i;
            break;
        }
    }

    if (index == -1) {
        cout << "UNRESTORABLE" << endl;
    } else {
        for (int i = 0; i < n; i++) {
            if (i >= index && i < index + m) {
                s[i] = t[i - index];
            } else if (s[i] == '?') {
                s[i] = 'a';
            }
        }
        cout << s << endl;
    }

    return 0;
}
