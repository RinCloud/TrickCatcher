#include <iostream>
#include <string>
using namespace std;

int main() {
    string s, t;
    cin >> s >> t;

    long long int n = 1e100;
    string s_prime = string(n, ' ');

    long long int idx = 0;
    for (int i = 0; i < n; i++) {
        s_prime[i] = s[idx];
        idx++;
        if (idx == s.length()) {
            idx = 0;
        }
    }

    idx = 0;
    for (int i = 0; i < t.length(); i++) {
        if (s_prime[idx] == t[i]) {
            idx++;
        }
        if (idx == n) {
            cout << i + 1 << endl;
            return 0;
        }
    }

    cout << -1 << endl;

    return 0;
}