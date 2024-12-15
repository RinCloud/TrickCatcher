#include <iostream>
#include <string>
using namespace std;

string bitwise_and(string x, string y) {
    string result;
    for (int i = 0; i < x.size(); i++) {
        if (x[i] == '1' && y[i] == '1') {
            result += '1';
        } else {
            result += '0';
        }
    }
    return result;
}

string bitwise_add(string x, string y) {
    string result;
    char carry = '0';
    for (int i = x.size() - 1; i >= 0; i--) {
        if (x[i] == '0' && y[i] == '0') {
            result = carry + result;
            carry = '0';
        } else if (x[i] == '1' && y[i] == '0' || x[i] == '0' && y[i] == '1') {
            if (carry == '0') {
                result = '1' + result;
            } else {
                result = '0' + result;
                carry = '1';
            }
        } else {
            result = carry + result;
            carry = '1';
        }
    }
    if (carry == '1') {
        result = '1' + result;
    }
    return result;
}

string calc_numbers(int n, int m, int k, string s, string t) {
    string takahashi = s;
    string aoki = t;
    for (int i = 0; i < k; i++) {
        string z = bitwise_and(takahashi, aoki);
        takahashi = bitwise_add(takahashi, z);
        aoki = bitwise_add(aoki, z);
    }
    return takahashi + "\n" + aoki;
}

int main() {
    int n, m, k;
    cin >> n >> m >> k;
    string s, t;
    cin >> s >> t;
    cout << calc_numbers(n, m, k, s, t) << endl;
    return 0;
}