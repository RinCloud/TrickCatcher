#include <iostream>
#include <string>
using namespace std;

int main() {
    string s, t;
    cin >> s >> t;
    
    int slen = s.length();
    int tlen = t.length();
    
    // Compute the length of the repeating pattern in s
    int patternLength = 0;
    for (int i = 1; i <= slen; i++) {
        if (s.substr(0, i) == s.substr(slen - i, i)) {
            patternLength = i;
            break;
        }
    }
    
    // If the pattern length is 0, the resulting integer i will be infinity
    if (patternLength == 0) {
        cout << -1 << endl;
        return 0;
    }
    
    // Compute the length of the repeating pattern in t
    int tPatternLength = 0;
    for (int i = 1; i <= tlen; i++) {
        if (t.substr(0, i) == t.substr(tlen - i, i)) {
            tPatternLength = i;
            break;
        }
    }
    
    // If the pattern length of t is longer than the one of s, the resulting integer i will be 0
    if (tPatternLength > patternLength) {
        cout << 0 << endl;
        return 0;
    }
    
    // Check if there exists a non-negative integer i satisfying the condition
    if (patternLength % tPatternLength == 0) {
        cout << patternLength / tPatternLength - 1 << endl;
    } else {
        cout << patternLength / tPatternLength << endl;
    }
    
    return 0;
}