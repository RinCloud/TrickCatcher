#include <iostream>
#include <string>

using namespace std;

string displayString(string s) {
    string displayedString = "";
    
    for (char c : s) {
        if (c == '0') {
            displayedString += '0';
        } else if (c == '1') {
            displayedString += '1';
        } else if (c == 'B') {
            if (!displayedString.empty()) {
                displayedString.pop_back();
            }
        }
    }
    
    return displayedString;
}

int main() {
    string s;
    cin >> s;
    
    string result = displayString(s);
    
    cout << result << endl;
    
    return 0;
}