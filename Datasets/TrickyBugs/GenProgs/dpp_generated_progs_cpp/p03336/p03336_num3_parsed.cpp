#include <iostream>
#include <string>
using namespace std;

string bitwiseAnd(string x, string y) {
    int n = x.length();
    string res = "";
    for (int i = 0; i < n; i++) {
        if (x[i] == '1' && y[i] == '1') {
            res += '1';
        } else {
            res += '0';
        }
    }
    return res;
}

string calculateNumber(string x, string y, int k) {
    int n = x.length();
    for (int i = 0; i < k; i++) {
        string z = bitwiseAnd(x, y);
        x = addBinary(x, z);
        y = addBinary(y, z);
    }
    return x;
}

string addBinary(string a, string b) {
    int carry = 0;
    string res = "";
    int n = a.length();
    for (int i = n-1; i >= 0; i--) {
        int sum = (a[i] - '0') + (b[i] - '0') + carry;
        res = to_string(sum % 2) + res;
        carry = sum / 2;
    }
    if (carry) {
        res = '1' + res;
    }
    return res;
}

int main() {
    int n, m, k;
    cin >> n >> m >> k;
    string s, t;
    cin >> s >> t;
    string takahashi = calculateNumber(s, t, k);
    string aoki = calculateNumber(t, s, k);
    cout << takahashi << endl;
    cout << aoki << endl;
    return 0;
}