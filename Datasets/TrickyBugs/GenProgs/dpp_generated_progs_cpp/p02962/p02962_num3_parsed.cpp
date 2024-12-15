#include <iostream>
#include <string>
using namespace std;

int main() {
    string s, t;
    cin >> s >> t;
    
    // Check if the length of 's' is divisible by the length of 't'
    if (s.length() % t.length() != 0) {
        cout << -1 << endl;
        return 0;
    }
    
    int repetitions = s.length() / t.length();
    
    // Find the maximum value of 'i'
    int max_i = 0;
    
    // Iterate through all possible values of 'i'
    for (int i = 0; i < repetitions; i++) {
        // Construct the concatenation of 'i' copies of 't'
        string concatenated_t = "";
        for (int j = 0; j < i; j++) {
            concatenated_t += t;
        }
        
        // Check if the concatenation of 'i' copies of 't' is a substring of the concatenation of 'j' copies of 's'
        bool is_substring = true;
        for (int j = i; j < repetitions; j++) {
            string concatenated_s = "";
            for (int k = 0; k < j; k++) {
                concatenated_s += s;
            }
            
            if (concatenated_s.find(concatenated_t) == string::npos) {
                is_substring = false;
                break;
            }
        }
        
        // If 'i' copies of 't' is a substring of the concatenation of 'j' copies of 's', update 'max_i'
        if (is_substring) {
            max_i = i;
        }
    }
    
    cout << max_i << endl;
    
    return 0;
}