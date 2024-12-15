#include <iostream>
#include <algorithm>
#include <vector>
#include <string>

using namespace std;

int main() {
    string A;
    cin >> A;

    vector<int> cnt(26, 0);
    for (char ch : A) {
        cnt[ch - 'a']++;
    }

    string ans = "";
    for (int i = 0; i < 26; i++) {
        if (cnt[i] == 0) { // current character is not present in A
            ans += (char)(i + 'a');
            break;
        }
    }

    if (ans == "") { // all characters are present in A, need to add one extra character
        for (int i = 0; i < 26; i++) {
            if (cnt[i] > 1) { // current character is present in A more than once
                ans += (char)(i + 'a');
                break;
            }
        }
    }

    cout << ans << endl;

    return 0;
}
