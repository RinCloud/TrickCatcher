#include <iostream>
#include <string>
using namespace std;

int main() {
    string s;
    cin >> s;

    int ans = 0;
    char prev = s[0];
    for (int i = 1; i < s.length(); i++) {
        if (s[i] != prev) {
            ans++;
            prev = s[i];
        }
    }

    cout << ans << endl;

    return 0;
}