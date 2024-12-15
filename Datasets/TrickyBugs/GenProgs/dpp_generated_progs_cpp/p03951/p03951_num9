#include <iostream>
#include <string>
using namespace std;

int main() {
    int N;
    string s, t;
    cin >> N >> s >> t;

    int len = N;
    for (int i = N - 1; i >= 0; i--) {
        bool found = true;
        for (int j = 0; j < N - i; j++) {
            if (s[i + j] != t[j]) {
                found = false;
                break;
            }
        }
        if (found) {
            len = N - i;
            break;
        }
    }

    int res = N + len;
    cout << res << endl;
    return 0;
}