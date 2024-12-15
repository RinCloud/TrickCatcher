#include <iostream>
#include <vector>
#include <algorithm>
#include <string>
#include <cmath>

using namespace std;

string findLongestSubsequence(vector<string> &S, int K) {
    int N = S.size(); // Number of strings
    int M = S[N-1].size(); // Size of longest string
    vector<int> validIndexes(M, 0); // Count of valid strings for each index
    vector<vector<string>> subsequences(M+1); // Store subsequences by length

    // Loop through each string in S
    for (int i = 0; i < N; i++) {
        string currString = S[i];

        // Loop through each character of current string
        for (int j = 0; j < M; j++) {
            // Get current character
            char currChar = currString[j];

            // If current character is '1', increment the count of valid strings for this index
            if (currChar == '1') {
                validIndexes[j]++;
            }

            // If the count of valid strings for this index is greater than or equal to K,
            // add the current substring to the list of subsequences
            if (validIndexes[j] >= K) {
                subsequences[j+1].push_back(currString.substr(0, j+1));
            }
        }
    }

    string result = "";
    // Loop through subsequences starting from the longest
    for (int i = M; i > 0; i--) {
        // If there are no subsequences of length i, continue to the next length
        if (subsequences[i].empty()) {
            continue;
        }

        // Sort the subsequences lexicographically
        sort(subsequences[i].begin(), subsequences[i].end());

        // Set the result as the first lexicographically smallest subsequence of length i
        result = subsequences[i][0];

        // Break the loop as we found the result
        break;
    }

    return result;
}

int main() {
    // Read input values
    int N, K;
    cin >> N >> K;
    vector<string> S(N+1);
    for (int i = 0; i <= N; i++) {
        cin >> S[i];
    }

    // Find the longest subsequence
    string longestSubsequence = findLongestSubsequence(S, K);

    // Print the result
    cout << longestSubsequence << endl;

    return 0;
}