#include <iostream>
#include <string>
#include <vector>
#include <algorithm>

using namespace std;

// Function to check if a substring of S can be made into a substring of T
bool canBeMade(string S, string T, int a, int b, int c, int d) {
    string sub_S = S.substr(a - 1, b - a + 1); // Extract the substring of S
    string sub_T = T.substr(c - 1, d - c + 1); // Extract the substring of T
    
    // Count the number of 'A's and 'B's in both substrings
    int count_S_A = count(sub_S.begin(), sub_S.end(), 'A');
    int count_S_B = count(sub_S.begin(), sub_S.end(), 'B');
    int count_T_A = count(sub_T.begin(), sub_T.end(), 'A');
    int count_T_B = count(sub_T.begin(), sub_T.end(), 'B');
    
    // If the count of 'A's and 'B's in both substrings are equal, then return true
    if (count_S_A == count_T_A && count_S_B == count_T_B) {
        return true;
    }
    
    return false;
}

int main() {
    string S, T;
    int q;
    cin >> S >> T >> q;
    
    // Perform the queries
    for (int i = 0; i < q; i++) {
        int a, b, c, d;
        cin >> a >> b >> c >> d;
        
        // Check if the substring of S can be made into the substring of T for each query
        if (canBeMade(S, T, a, b, c, d)) {
            cout << "YES" << endl;
        } else {
            cout << "NO" << endl;
        }
    }
    
    return 0;
}