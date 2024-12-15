#include <iostream>
#include <string>

using namespace std;

bool isPalindrome(string s) {
    int n = s.length();
    for (int i = 0; i < n / 2; i++) {
        if (s[i] != s[n - i - 1]) {
            return false;
        }
    }
    return true;
}

bool isStrongPalindrome(string s) {
    int n = s.length();
    string first_half = s.substr(0, (n-1)/2);
    string second_half = s.substr((n+3)/2 - 1, n - (n+3)/2 + 1);
    
    return isPalindrome(s) && isPalindrome(first_half) && isPalindrome(second_half);
}

int main() {
    string s;
    cin >> s;
    
    if (isStrongPalindrome(s)) {
        cout << "Yes" << endl;
    } else {
        cout << "No" << endl;
    }
    
    return 0;
}