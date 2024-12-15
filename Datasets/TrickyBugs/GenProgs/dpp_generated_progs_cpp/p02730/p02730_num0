#include <iostream>
#include <string>

using namespace std;

bool isPalindrome(const string& str) {
    int left = 0;
    int right = str.length() - 1;
    while (left < right) {
        if (str[left] != str[right]) {
            return false;
        }
        left++;
        right--;
    }
    return true;
}

bool isStrongPalindrome(const string& str) {
    int n = str.length();
    string firstHalf = str.substr(0, (n - 1) / 2);
    string secondHalf = str.substr((n + 3) / 2 - 1);
    return isPalindrome(str) && isPalindrome(firstHalf) && isPalindrome(secondHalf);
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