#include <iostream>
#include <string>
using namespace std;

bool possible(string s) {
    // Base case
    if (s.empty()) {
        return true;
    }
    
    // Check if s ends with one of the allowed strings
    if (s.length() >= 5 && s.substr(s.length() - 5) == "dream") {
        if (possible(s.substr(0, s.length() - 5))) {
            return true;
        }
    }
    if (s.length() >= 5 && s.substr(s.length() - 5) == "erase") {
        if (possible(s.substr(0, s.length() - 5))) {
            return true;
        }
    }
    
    // Check if s ends with "eraser"
    if (s.length() >= 6 && s.substr(s.length() - 6) == "eraser") {
        if (possible(s.substr(0, s.length() - 6))) {
            return true;
        }
    }
    
    // Check if s ends with "dreamer"
    if (s.length() >= 7 && s.substr(s.length() - 7) == "dreamer") {
        if (possible(s.substr(0, s.length() - 7))) {
            return true;
        }
    }
    
    // If none of the above conditions are met, it is not possible to obtain S = T
    return false;
}

int main() {
    string s;
    cin >> s;
    
    if (possible(s)) {
        cout << "YES" << endl;
    } else {
        cout << "NO" << endl;
    }
    
    return 0;
}