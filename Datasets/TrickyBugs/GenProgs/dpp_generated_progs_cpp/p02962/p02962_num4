#include <iostream>
#include <string>

using namespace std;

int main() {
    string s, t;
    cin >> s >> t;

    int n = s.length();
    int m = t.length();

    // Check if t is a substring of s
    if (s.find(t) != string::npos) {
        cout << -1 << endl;
        return 0;
    }

    // Check if t is a repeated substring of s
    for (int i = 0; i < n; i += m) {
        if (s.substr(i, m) == t) {
            cout << -1 << endl;
            return 0;
        }
    }

    int count = 0;
    int max_i = 0;

    // Count the maximum value of i
    while (true) {
        string temp = s.substr(max_i * m, m);

        if (temp == t) {
            max_i++;
            count = max_i;
        } else if (s.substr((max_i + 1) * m, m) == t) { // Check if next substring is t
            max_i++;
        } else {
            break;
        }
    }

    cout << count << endl;

    return 0;
}