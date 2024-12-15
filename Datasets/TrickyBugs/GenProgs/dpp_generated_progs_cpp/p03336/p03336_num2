#include <iostream>
#include <string>
using namespace std;

string bitwiseAnd(string s, string t) {
    string ans = "";
    for (int i = 0; i < s.length(); i++) {
        if (s[i] == '1' && t[i] == '1') {
            ans += '1';
        } else {
            ans += '0';
        }
    }
    return ans;
}

string add(string s, int num) {
    string ans = "";
    int carry = num;
    for (int i = s.length() - 1; i >= 0; i--) {
        int sum = (s[i] - '0') + carry;
        ans = to_string(sum % 2) + ans;
        carry = sum / 2;
    }
    while (carry > 0) {
        ans = to_string(carry % 2) + ans;
        carry /= 2;
    }
    return ans;
}

int main() {
    int n, m, k;
    cin >> n >> m >> k;
    string s, t;
    cin >> s >> t;

    // Perform the bitwise AND and add operation k times
    for (int i = 0; i < k; i++) {
        string z = bitwiseAnd(s, t);
        s = add(s, stoi(z, nullptr, 2));
        t = add(t, stoi(z, nullptr, 2));
    }

    cout << s << endl;
    cout << t << endl;

    return 0;
}