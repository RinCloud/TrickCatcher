#include <iostream>
#include <string>

using namespace std;

string S;

bool isPossible(string T) {
    // If T is equal to S, return true
    if (T == S) {
        return true;
    }
    
    // If T is longer than S, return false
    if (T.length() > S.length()) {
        return false;
    }
    
    // Check if T can be extended with any of the possible strings
    if (S.substr(0, T.length()) == T) {
        if (isPossible(T + "dream") || isPossible(T + "dreamer") || isPossible(T + "erase") || isPossible(T + "eraser")) {
            return true;
        }
    }
    
    return false;
}

int main() {
    // Read the input
    cin >> S;
    
    // Check if it is possible to obtain S = T
    if (isPossible("")) {
        cout << "YES" << endl;
    } else {
        cout << "NO" << endl;
    }
    
    return 0;
}