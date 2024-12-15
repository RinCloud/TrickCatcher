#include <iostream>
#include <string>
using namespace std;

bool isPalindrome(const string& s) {
    int n = s.length();
    for (int i = 0; i < n / 2; i++) {
        if (s[i] != s[n - i - 1]) {
            return false;
        }
    }
    return true;
}

bool isStrongPalindrome(const string& s) {
    int n = s.length();
    string firstHalf = s.substr(0, (n - 1) / 2);
    string secondHalf = s.substr((n + 3) / 2 - 1, n);
    
    return isPalindrome(s) && isPalindrome(firstHalf) && isPalindrome(secondHalf);
}

int main() {
    string S;
    cin >> S;
    
    if (isStrongPalindrome(S)) {
        cout << "Yes" << endl;
    } else {
        cout << "No" << endl;
    }
    
    return 0;
}