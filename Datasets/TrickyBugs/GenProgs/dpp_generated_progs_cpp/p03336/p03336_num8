#include <iostream>
#include <string>
using namespace std;

string bitwiseAnd(string x, string y) {
    string res;
    for (int i = 0; i < x.size(); i++) {
        if (x[i] == '1' && y[i] == '1') {
            res += '1';
        } else {
            res += '0';
        }
    }
    return res;
}

string addBinary(string x, string y) {
    string res;
    int carry = 0;
    int i = x.size() - 1;
    int j = y.size() - 1;
    while (i >= 0 || j >= 0 || carry != 0) {
        int sum = carry;
        if (i >= 0) {
            sum += x[i] - '0';
            i--;
        }
        if (j >= 0) {
            sum += y[j] - '0';
            j--;
        }
        res = to_string(sum % 2) + res;
        carry = sum / 2;
    }
    return res;
}

void solve() {
    int n, m, k;
    cin >> n >> m >> k;
    string s, t;
    cin >> s >> t;

    for (int i = 0; i < k; i++) {
        string z = bitwiseAnd(s, t);
        s = addBinary(s, z);
        t = addBinary(t, z);
    }

    cout << s << endl;
    cout << t << endl;
}

int main() {
    solve();
    return 0;
}