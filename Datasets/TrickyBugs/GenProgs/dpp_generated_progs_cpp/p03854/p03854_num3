#include <iostream>
#include <string>

using namespace std;

bool solve(string s) {
    string t;
    
    while (s.length() > 0) {
        bool possible = false;
        
        if (s.length() >= 5 && s.substr(s.length() - 5) == "dream") {
            t += "dream";
            s = s.substr(0, s.length() - 5);
            possible = true;
        }
        
        if (s.length() >= 7 && s.substr(s.length() - 7) == "dreamer") {
            t += "dreamer";
            s = s.substr(0, s.length() - 7);
            possible = true;
        }
        
        if (s.length() >= 5 && s.substr(s.length() - 5) == "erase") {
            t += "erase";
            s = s.substr(0, s.length() - 5);
            possible = true;
        }
        
        if (s.length() >= 6 && s.substr(s.length() - 6) == "eraser") {
            t += "eraser";
            s = s.substr(0, s.length() - 6);
            possible = true;
        }
        
        if (!possible) {
            return false;
        }
    }
    
    return true;
}

int main() {
    string s;
    cin >> s;
    
    if (solve(s)) {
        cout << "YES" << endl;
    } else {
        cout << "NO" << endl;
    }
    
    return 0;
}