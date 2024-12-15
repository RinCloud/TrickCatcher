#include <iostream>
#include <string>
using namespace std;

bool isPalindrome(int number) {
    string str = to_string(number);
    int len = str.length();
    for (int i = 0; i < len / 2; i++) {
        if (str[i] != str[len - i - 1]) {
            return false;
        }
    }
    return true;
}

int countPalindromes(int A, int B) {
    int count = 0;
    for (int i = A; i <= B; i++) {
        if (isPalindrome(i)) {
            count++;
        }
    }
    return count;
}

int main() {
    int A, B;
    cin >> A >> B;
    cout << countPalindromes(A, B) << endl;
    return 0;
}