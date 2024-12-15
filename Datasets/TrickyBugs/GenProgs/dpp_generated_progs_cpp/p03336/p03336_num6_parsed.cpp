#include <iostream>
#include <string>
using namespace std;

// Function to find the binary AND of two numbers
string bitwiseAnd(string x, string y) {
    string result = "";
    int n = x.length();
    for (int i = 0; i < n; i++) {
        if (x[i] == '1' && y[i] == '1') {
            result += '1';
        } else {
            result += '0';
        }
    }
    return result;
}

// Function to perform the operation K times
void performOperation(int k, string& s, string& t) {
    int n = s.length();
    for (int i = 0; i < k; i++) {
        string z = bitwiseAnd(s, t);
        s = addBinary(s, z);
        t = addBinary(t, z);
    }
}

// Function to add two binary numbers
string addBinary(string a, string b) {
    int carry = 0;
    string result = "";
    int n = a.length();
    for (int i = n-1; i >= 0; i--) {
        int sum = (a[i] - '0') + (b[i] - '0') + carry;
        carry = sum / 2;
        result = to_string(sum % 2) + result;
    }
    if (carry) {
        result = '1' + result;
    }
    return result;
}

int main() {
    int n, m, k;
    cin >> n >> m >> k;
    string s, t;
    cin >> s >> t;
    
    performOperation(k, s, t);
    
    cout << s << endl;
    cout << t << endl;
    
    return 0;
}