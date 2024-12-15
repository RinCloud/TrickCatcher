#include <iostream>
#include <string>
#include <algorithm>

using namespace std;

string computeAndAdd(string a, string b, int k) {
    int n = a.length();
    int m = b.length();
    
    reverse(a.begin(), a.end());
    reverse(b.begin(), b.end());
    
    while (k--) {
        a += '0';
        b += '0';
    }
    
    string result = "";
    
    bool carry = false;
    
    for (int i = 0; i < max(n, m); i++) {
        int digitA = (i < n ? (a[i] - '0') : 0);
        int digitB = (i < m ? (b[i] - '0') : 0);
        
        int digitSum = digitA + digitB + carry;
        
        carry = (digitSum >= 2);
        digitSum %= 2;
        
        result += to_string(digitSum);
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
    
    string takahashi = computeAndAdd(s, t, k);
    string aoki = computeAndAdd(t, s, k);
    
    cout << takahashi << endl;
    cout << aoki << endl;
    
    return 0;
}