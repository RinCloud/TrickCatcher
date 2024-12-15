#include <iostream>
#include <string>
using namespace std;

int main() {
    string s, t;
    cin >> s >> t;

    int slen = s.length();
    int tlen = t.length();

    if (tlen > slen) {
        cout << "0" << endl;
        return 0;
    }

    int max_i = -1;
    for (int i = 0; i <= slen; i++) {
        string repeated_t = "";
        for (int j = 0; j < i; j++) {
            repeated_t += t;
        }
        if (s.find(repeated_t) != string::npos) {
            max_i = i;
        }
    }

    cout << max_i << endl;

    return 0;
}