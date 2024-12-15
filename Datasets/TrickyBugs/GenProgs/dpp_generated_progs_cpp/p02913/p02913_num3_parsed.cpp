#include <iostream>
#include <string>
#include <vector>

using namespace std;

int main() {
    // Read input
    int N;
    string S;
    cin >> N >> S;
    
    // Initialize variables
    int maxLen = 0;
    vector<int> prefixes(N, 0);
    
    // Compute prefixes array
    for (int i = 1; i < N; i++) {
        int j = prefixes[i - 1];
        while (j > 0 && S[i] != S[j]) {
            j = prefixes[j - 1];
        }
        if (S[i] == S[j]) {
            j++;
        }
        prefixes[i] = j;
        
        // Check if a non-empty string occurs twice or more as contiguous substrings
        if (j > maxLen && i != N - 1 && prefixes[i + 1] >= j) {
            maxLen = j;
        }
    }
    
    // Print the maximum length
    cout << maxLen << endl;

    return 0;
}
