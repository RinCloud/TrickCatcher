#include <iostream>
#include <string>
using namespace std;

int main() {
    string s, t;
    cin >> s >> t;

    int n = s.length();
    int m = t.length();

    // Find the maximum value of i
    int max_i = -1;

    for (int i = 0; i < n; i++) {
        // Check if the concatenation of i copies of t is a substring of the concatenation of j copies of s
        int j = 0;
        int k = 0;

        while (j < i * m && k < n * m) {
            if (s[k % n] == t[j % m]) {
                j++;
            }
            k++;
        }

        // If all characters of i copies of t were found in the concatenation of j copies of s
        if (j == i * m) {
            // Update the maximum value of i
            max_i = i;
        }
    }

    // Print the maximum value of i
    if (max_i == -1) {
        cout << -1;
    } else {
        cout << max_i;
    }

    return 0;
}