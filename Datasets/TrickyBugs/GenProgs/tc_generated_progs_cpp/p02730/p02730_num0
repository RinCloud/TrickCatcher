#include <iostream>
#include <string>
using namespace std;

int main() {
    string s;
    bool a = true;
    cin >> s;

    for (int i = 0; i < (s.size()-3)/2; i++) {
        if (s[i] != s[s.size()-1-i]) {
            a = false;
            break;
        }
    }

    for (int i = 0; i <= (s.size()-3)/4; i++) {
        if (s[(s.size()+3)/2+i-1] != s[s.size()-1-i]) {
            a = false;
            break;
        }
    }

    if (a == false) {
        cout << "No";
    } else {
        cout << "Yes";
    }

    return 0;
}