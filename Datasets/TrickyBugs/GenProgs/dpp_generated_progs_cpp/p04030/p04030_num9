#include <iostream>
#include <string>
using namespace std;

string processKeystrokes(string s) {
    string editorString = "";
    for (int i = 0; i < s.length(); i++) {
        if (s[i] == '0') {
            editorString += '0';
        } else if (s[i] == '1') {
            editorString += '1';
        } else if (s[i] == 'B') {
            if (!editorString.empty()) {
                editorString.pop_back();
            }
        }
    }
    return editorString;
}

int main() {
    string s;
    cin >> s;
    string result = processKeystrokes(s);
    cout << result << endl;
    return 0;
}