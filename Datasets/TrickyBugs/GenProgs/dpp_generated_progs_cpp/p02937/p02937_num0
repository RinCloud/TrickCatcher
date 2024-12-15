#include <iostream>
#include <string>

using namespace std;

int main() {
    string s, t;
    cin >> s >> t;

    long long n = 1e100;

    // Build a long string consisting of 10^100 copies of s
    string ss;
    while (ss.size() < n) {
        ss += s;
    }

    // Find the minimum i
    int i = 0;
    int j = 0;
    while (i < ss.size() && j < t.size()) {
        if (ss[i] == t[j]) {
            j++;
        }
        i++;
    }

    // Output the result
    if (j == t.size()) {
        cout << i << endl;
    } else {
        cout << -1 << endl;
    }

    return 0;
}