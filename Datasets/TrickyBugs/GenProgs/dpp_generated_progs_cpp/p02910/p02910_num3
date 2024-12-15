#include <iostream>
#include <string>

using namespace std;

string isEasilyPlayable(string s) {
    for (int i = 0; i < s.length(); i++) {
        if (i % 2 == 0) {
            if (s[i] == 'L') {
                return "No";
            }
        } else {
            if (s[i] == 'R') {
                return "No";
            }
        }
    }
    return "Yes";
}

int main() {
    string s;
    cin >> s;
    cout << isEasilyPlayable(s) << endl;
    return 0;
}