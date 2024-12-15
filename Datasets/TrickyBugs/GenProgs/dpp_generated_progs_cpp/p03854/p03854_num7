#include <iostream>
#include <string>

using namespace std;

bool canObtain(string S) {
    int n = S.length();
    
    // reverse the string
    reverse(S.begin(), S.end());
    
    // check if T can be obtained
    while (n > 0) {
        if (S.substr(0, 7) == "remaerd") { // dreamer reversed
            S = S.substr(7);
            n -= 7;
        } else if (S.substr(0, 6) == "resare") { // eraser reversed
            S = S.substr(6);
            n -= 6;
        } else if (S.substr(0, 5) == "maerd") { // dream reversed
            S = S.substr(5);
            n -= 5;
        } else if (S.substr(0, 5) == "esare") { // erase reversed
            S = S.substr(5);
            n -= 5;
        } else {
            return false;
        }
    }
    
    return true;
}

int main() {
    // read input
    string S;
    cin >> S;
    
    // check if S = T is possible
    if (canObtain(S)) {
        cout << "YES" << endl;
    } else {
        cout << "NO" << endl;
    }
    
    return 0;
}