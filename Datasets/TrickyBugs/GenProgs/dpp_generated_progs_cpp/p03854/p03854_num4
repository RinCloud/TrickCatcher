#include <iostream>
#include <string>

using namespace std;

bool is_possible(string s) {
    int n = s.length();
    int i = n - 1;
    
    while (i >= 0) {
        if (s[i] != 'm') {
            return false;
        }
        
        if (i >= 4 && s.substr(i - 4, 5) == "dream") {
            i -= 5;
        } else if (i >= 5 && s.substr(i - 5, 6) == "eraser") {
            i -= 6;
        } else if (i >= 4 && s.substr(i - 4, 5) == "erase") {
            i -= 5;
        } else if (i >= 6 && s.substr(i - 6, 7) == "dreamer") {
            i -= 7;
        } else {
            return false;
        }
    }
    
    return true;
}

int main() {
    string s;
    cin >> s;
    
    if (is_possible(s)) {
        cout << "YES" << endl;
    } else {
        cout << "NO" << endl;
    }

    return 0;
}