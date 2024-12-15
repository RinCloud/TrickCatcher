#include <iostream>
#include <string>

using namespace std;

int main() {
    string s, t;
    cin >> s >> t;

    int n = s.size();
    int m = t.size();

    string s_prime = "";
    for (int i = 0; i < 100; i++) {
        s_prime += s;
    }

    int i = 0, j = 0;
    while (i < 100 * n) {
        if (s_prime[i] == t[j]) {
            j++;
        }

        if (j == m) {
            cout << (i / n) + 1 << endl;
            return 0;
        }

        i++;
    }

    cout << -1 << endl;
    return 0;
}