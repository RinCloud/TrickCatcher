#include <iostream>
#include <string>
#include <cmath>

using namespace std;

int main() {
    string s, t;
    cin >> s >> t;

    long long n = pow(10, 100);
    string s_prime = "";
    for (int i = 0; i < n; i++) {
        s_prime += s;
    }

    int t_ptr = 0;
    for (int i = 0; i < s_prime.length(); i++) {
        if (t_ptr == t.length()) {
            cout << i << endl;
            return 0;
        }
        if (s_prime[i] == t[t_ptr]) {
            t_ptr++;
        }
    }

    if (t_ptr == t.length()) {
        cout << s_prime.length() << endl;
    } else {
        cout << -1 << endl;
    }

    return 0;
}