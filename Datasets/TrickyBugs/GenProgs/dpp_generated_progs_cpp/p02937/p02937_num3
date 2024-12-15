#include <iostream>
#include <string>
using namespace std;

int main() {
    string s, t;
    cin >> s >> t;

    string s_repeat = s;
    while (s_repeat.length() < (1e100)) {
        s_repeat += s;
    }

    int i = 0, j = 0;
    while (j < t.length() && i < s_repeat.length()) {
        if (s_repeat[i] == t[j]) {
            j++;
        }
        i++;
    }

    if (j == t.length()) {
        cout << i << endl;
    } else {
        cout << -1 << endl;
    }

    return 0;
}