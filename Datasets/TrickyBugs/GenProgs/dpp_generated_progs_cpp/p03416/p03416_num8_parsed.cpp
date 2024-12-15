#include <iostream>
#include <string>
using namespace std;

bool isPalindrome(int num) {
    string s = to_string(num);
    int n = s.length();
    
    for (int i = 0; i < n / 2; i++) {
        if (s[i] != s[n - i - 1]) {
            return false;
        }
    }
    
    return true;
}

int main() {
    int A, B;
    cin >> A >> B;
    
    int count = 0;
    for (int i = A; i <= B; i++) {
        if (isPalindrome(i)) {
            count++;
        }
    }
    
    cout << count;
    
    return 0;
}