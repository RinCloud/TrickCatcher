#include <iostream>
#include <string>

using namespace std;

bool canObtain(string s) {
    while (s.length() > 0) {
        if (s.length() >= 7 && s.substr(s.length() - 7) == "dreamer") {
            s.erase(s.length() - 7);
        } else if (s.length() >= 6 && s.substr(s.length() - 6) == "eraser") {
            s.erase(s.length() - 6);
        } else if (s.length() >= 5 && (s.substr(s.length() - 5) == "dream" || s.substr(s.length() - 5) == "erase")) {
            s.erase(s.length() - 5);
        } else {
            return false;
        }
    }
    return true;
}

int main() {
    string s;
    cin >> s;
    
    if (canObtain(s)) {
        cout << "YES" << endl;
    } else {
        cout << "NO" << endl;
    }
    
    return 0;
}