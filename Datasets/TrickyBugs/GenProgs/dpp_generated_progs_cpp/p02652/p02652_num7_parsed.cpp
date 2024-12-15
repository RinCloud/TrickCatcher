#include <iostream>
#include <string>
#include <algorithm>
using namespace std;

int main() {
    string s;
    cin >> s;
    
    int n = s.length();
    int count0 = 0, count1 = 0, countQ = 0;
    int unbalancedness = n;
    
    // Count the number of 0s, 1s, and ?s in the string
    for (int i = 0; i < n; i++) {
        if (s[i] == '0') {
            count0++;
        } else if (s[i] == '1') {
            count1++;
        } else if (s[i] == '?') {
            countQ++;
        }
    }
    
    // Try all possible combinations of replacing ? with 0 and 1
    for (int replacements = 0; replacements <= countQ; replacements++) {
        int zeros = count0 + replacements;
        int ones = count1 + countQ - replacements;
        int cur_unbalancedness = max(zeros, ones) - min(zeros, ones);
        unbalancedness = min(unbalancedness, cur_unbalancedness);
    }
    
    cout << unbalancedness << endl;
    
    return 0;
}