#include <iostream>
#include <vector>
#include <algorithm>

using namespace std;

string longestCommonString(vector<string>& strings) {
    int n = strings.size();
    vector<vector<int>> freq(n, vector<int>(26, 0));

    // Calculate the frequency of each character in each string
    for (int i = 0; i < n; i++) {
        for (char c : strings[i]) {
            freq[i][c - 'a']++;
        }
    }

    string commonString = "";

    // Find the lexicographically smallest character that occurs in all strings
    for (int i = 0; i < 26; i++) {
        int minFreq = INT_MAX;
        for (int j = 0; j < n; j++) {
            minFreq = min(minFreq, freq[j][i]);
        }
        
        // Add the character minFreq times to the common string
        commonString += string(minFreq, 'a' + i);
    }

    return commonString;
}

int main() {
    int n;
    cin >> n;

    vector<string> strings(n);
    for (int i = 0; i < n; i++) {
        cin >> strings[i];
    }

    string result = longestCommonString(strings);
    cout << result;

    return 0;
}
