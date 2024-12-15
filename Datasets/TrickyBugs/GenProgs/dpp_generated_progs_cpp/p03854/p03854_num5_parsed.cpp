#include <iostream>
#include <string>
using namespace std;

bool isPossible(string s) {
    int n = s.length();
    while (n > 0) {
        if (n >= 7 && s.substr(n - 7, 7) == "dreamer") {
            n -= 7;
        } else if (n >= 6 && s.substr(n - 6, 6) == "eraser") {
            n -= 6;
        } else if (n >= 5 && s.substr(n - 5, 5) == "dream") {
            n -= 5;
        } else if (n >= 5 && s.substr(n - 5, 5) == "erase") {
            n -= 5;
        } else {
            return false;
        }
    }
    return true;
}

int main() {
    string s;
    cin >> s;
  
    if (isPossible(s)) {
        cout << "YES" << endl;
    } else {
        cout << "NO" << endl;
    }
  
    return 0;
}