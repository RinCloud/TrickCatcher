#include <iostream>
#include <string>

using namespace std;

int main() {
    string s, t;
    cin >> s >> t;
    
    int s_len = s.length();
    int t_len = t.length();
    
    int max_i = -1;
    bool infinite = false;
    
    // Iterate over all possible values of i
    for (int i = 0; i <= s_len / t_len; i++) {
        // Check if the concatenation of i copies of t is a substring of s
        string i_copies = "";
        for (int j = 0; j < i; j++) {
            i_copies += t;
        }
        
        if (s.find(i_copies) != string::npos) {
            max_i = i;
        } else {
            infinite = true;
            break;
        }
    }
    
    if (infinite) {
        cout << -1 << endl;
    } else {
        cout << max_i << endl;
    }
    
    return 0;
}