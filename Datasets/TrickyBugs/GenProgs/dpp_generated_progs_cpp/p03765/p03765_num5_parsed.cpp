#include <iostream>
#include <string>
#include <vector>

using namespace std;

// Function to perform the operations on a string
string transformString(string& s) {
    int n = s.length();
    
    // Replace 'A' with 'BB' and 'B' with 'AA'
    for (int i = 0; i < n; i++) {
        if (s[i] == 'A') {
            s.replace(i, 1, "BB");
            i++;
        } else if (s[i] == 'B') {
            s.replace(i, 1, "AA");
            i++;
        }
    }
    
    // Delete substrings 'AAA' and 'BBB'
    int i = 0;
    while (i < s.length()) {
        if (i + 3 <= s.length() && s.substr(i, 3) == "AAA") {
            s.erase(i, 3);
        } else if (i + 3 <= s.length() && s.substr(i, 3) == "BBB") {
            s.erase(i, 3);
        } else {
            i++;
        }
    }
    
    return s;
}

int main() {
    string S, T;
    int q;
    cin >> S >> T >> q;
    
    vector<string> transformed_S(q);
    vector<string> transformed_T(q);
    
    // Get the transformed strings for each query
    for (int i = 0; i < q; i++) {
        int a, b, c, d;
        cin >> a >> b >> c >> d;
        
        // Extract the substrings
        string sub_S = S.substr(a-1, b-a+1);
        string sub_T = T.substr(c-1, d-c+1);
        
        // Transform the substrings
        transformed_S[i] = transformString(sub_S);
        transformed_T[i] = transformString(sub_T);
    }
    
    // Check if the transformed substrings are equal
    for (int i = 0; i < q; i++) {
        if (transformed_S[i] == transformed_T[i]) {
            cout << "YES\n";
        } else {
            cout << "NO\n";
        }
    }
    
    return 0;
}