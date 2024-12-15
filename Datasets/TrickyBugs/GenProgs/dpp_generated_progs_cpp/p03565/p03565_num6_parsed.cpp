#include <iostream>
#include <string>
using namespace std;

string get_smallest_string(string s, string t) {
    int n = s.length();
    int m = t.length();

    for (int i = n - m; i >= 0; i--) {
        bool possible = true;
        for (int j = 0; j < m; j++) {
            if (s[i + j] != '?' && s[i + j] != t[j]) {
                possible = false;
                break;
            }
        }

        if (possible) {
            for (int j = 0; j < m; j++) {
                s[i + j] = t[j];
            }
            for (int j = 0; j < n; j++) {
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
    string result = get_smallest_string(s, t);
    cout << result << endl;
    return 0;
}