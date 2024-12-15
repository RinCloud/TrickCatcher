#include <iostream>
#include <string>
using namespace std;

int main() {
    string s, t;
    cin >> s >> t;

    // Concatenate s with 10^100 copies
    string s_prime = "";
    for (int i = 0; i < 100; i++) {
        s_prime += s;
    }

    int t_index = 0; // Index of current character in t
    int i = 1; // Minimum i that satisfies the condition

    // Check if t is a subsequence of s_prime
    for (char c : s_prime) {
        if (c == t[t_index]) {
            t_index++;
            if (t_index == t.length()) {
                cout << i << endl;
                return 0;
            }
        }
        i++;
    }

    // If t is not a subsequence of s_prime
    cout << -1 << endl;

    return 0;
}