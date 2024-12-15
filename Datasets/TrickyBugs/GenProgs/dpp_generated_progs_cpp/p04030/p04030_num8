#include <iostream>
#include <stack>
using namespace std;

int main() {
    string s;
    cin >> s;
    stack<char> editor;

    for (char c : s) {
        if (c == '0' || c == '1') {
            editor.push(c);
        } else if (!editor.empty()) {
            editor.pop();
        }
    }

    string display = "";
    while (!editor.empty()) {
        display = editor.top() + display;
        editor.pop();
    }

    cout << display << endl;

    return 0;
}