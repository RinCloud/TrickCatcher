#include <iostream>
#include <string>
#include <algorithm>

using namespace std;

string bitwiseAND(const string& a, const string& b) {
    string result;
    int n = a.length();
    for (int i = 0; i < n; i++) {
        if (a[i] == '1' && b[i] == '1') {
            result += '1';
        } else {
            result += '0';
        }
    }
    return result;
}

string addBinary(const string& a, const string& b) {
    string result;
    int carry = 0;
    int n = a.length();
    for (int i = n - 1; i >= 0; i--) {
        int sum = (a[i] - '0') + (b[i] - '0') + carry;
        result += to_string(sum % 2);
        carry = sum / 2;
    }
    if (carry) {
        result += '1';
    }
    reverse(result.begin(), result.end());
    return result;
}

int main() {
    int n, m, k;
    cin >> n >> m >> k;
    string s, t;
    cin >> s >> t;

    string takahashi = s;
    string aoki = t;

    for (int i = 0; i < k; i++) {
        string z = bitwiseAND(takahashi, aoki);
        takahashi = addBinary(takahashi, z);
        aoki = addBinary(aoki, z);
    }

    cout << takahashi << endl;
    cout << aoki << endl;

    return 0;
}