#include <iostream>
#include <string>

using namespace std;

int countABC(string S) {
    int count = 0;
    int n = S.length();
    
    // Iterate through all possible starting positions
    for (int i = 0; i < n - 2; i++) {
        // Check if substring starting from i is "ABC"
        if (S[i] == 'A' && S[i+1] == 'B' && S[i+2] == 'C') {
            count++;
        }
    }
    
    return count;
}

int main() {
    int N;
    string S;
    
    // Read input
    cin >> N;
    cin >> S;
    
    // Count occurrences of "ABC"
    int result = countABC(S);
    
    // Print the result
    cout << result;
    
    return 0;
}