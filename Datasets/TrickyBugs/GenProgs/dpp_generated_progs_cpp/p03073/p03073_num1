#include <iostream>
#include <string>

using namespace std;

int minRepaintTiles(string s) {
    int n = s.length();
    int count = 0;
    for (int i = 1; i < n; i++) {
        if (s[i] == s[i-1]) {
            count++;
            if (s[i] == '0') {
                s[i] = '1';
            } else {
                s[i] = '0';
            }
        }
    }
    return count;
}

int main() {
    string s;
    cin >> s;
    
    int result = minRepaintTiles(s);
    cout << result << endl;
    
    return 0;
}