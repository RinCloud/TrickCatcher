#include <iostream>
#include <string>
#include <algorithm>

using namespace std;

int main() {
    string S;
    cin >> S;
    
    int n = S.length();
    int unbalancedness = n; // initialize with maximum possible unbalancedness
    
    int num0 = count(S.begin(), S.end(), '0'); // count the number of '0' characters
    int num1 = count(S.begin(), S.end(), '1'); // count the number of '1' characters
    
    int prefix0 = 0; // count of '0' characters in the prefix
    int prefix1 = 0; // count of '1' characters in the prefix
    
    for (int i = 0; i < n; i++) {
        if (S[i] == '0') {
            prefix0++;
        } else if (S[i] == '1') {
            prefix1++;
        }
        
        int suffix0 = num0 - prefix0; // count of '0' characters in the suffix
        int suffix1 = num1 - prefix1; // count of '1' characters in the suffix
        
        int maxUnbalancedness = max(prefix0 - suffix1, prefix1 - suffix0); // calculate unbalancedness for current position
        
        unbalancedness = min(unbalancedness, maxUnbalancedness); // update minimum possible unbalancedness
    }
    
    cout << unbalancedness << endl;
    
    return 0;
}