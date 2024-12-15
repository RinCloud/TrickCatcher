#include <iostream>
#include <string>
using namespace std;

bool isPalindromic(int num) {
    string numStr = to_string(num);
    int len = numStr.length();
    for (int i = 0; i < len / 2; i++) {
        if (numStr[i] != numStr[len - i - 1]) {
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
        if (isPalindromic(i)) {
            count++;
        }
    }
    
    cout << count << endl;
    
    return 0;
}