#include <iostream>
#include <string>
using namespace std;

int main() {
    // Read input
    string s, t;
    cin >> s >> t;

    // Check if t is a subsequence of s repeated 10^100 times
    string repeated_s = "";
    for (int i = 0; i < 100; i++) {
        repeated_s += s;
    }
    
    int i = 0, j = 0;
    while (i < repeated_s.length() && j < t.length()) {
        if (repeated_s[i] == t[j]) {
            j++;
        }
        i++;
    }

    // Print the minimum i value if t is a subsequence, otherwise -1
    if (j == t.length()) {
        cout << i << endl;
    } else {
        cout << -1 << endl;
    }

    return 0;
}