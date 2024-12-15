#include <iostream>
#include <string>
#include <set>
#include <algorithm>

using namespace std;

int main() {
    int N;
    cin >> N;
    string S;
    cin >> S;

    int maxDiff = 0;

    // Loop through all possible positions to cut the string
    for (int i = 1; i < N; i++) {
        // Create two substrings X and Y
        string X = S.substr(0, i);
        string Y = S.substr(i, N - i);

        set<char> diffLetters;

        // Count different letters in X and Y
        for (char c : X) {
            diffLetters.insert(c);
        }
        for (char c : Y) {
            diffLetters.insert(c);
        }

        // Update maxDiff
        int diffCount = diffLetters.size();
        maxDiff = max(maxDiff, diffCount);
    }

    cout << maxDiff << endl;

    return 0;
}