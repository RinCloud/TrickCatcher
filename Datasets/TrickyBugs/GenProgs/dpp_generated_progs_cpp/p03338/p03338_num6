#include <iostream>
#include <string>
#include <set>

using namespace std;

int main() {
    int N;
    string S;
    cin >> N >> S;

    int maxCount = 0;

    // Iterate through all possible positions to cut the string
    for (int i = 1; i < N; i++) {
        set<char> leftLetters;
        set<char> rightLetters;

        // Count the number of different letters in the left side of the cut
        for (int j = 0; j < i; j++) {
            leftLetters.insert(S[j]);
        }

        // Count the number of different letters in the right side of the cut
        for (int j = i; j < N; j++) {
            rightLetters.insert(S[j]);
        }

        // Find the maximum number of different letters between the left and right side
        int currCount = 0;
        for (char letter : leftLetters) {
            if (rightLetters.find(letter) != rightLetters.end()) {
                currCount++;
            }
        }

        // Update the maximum count if necessary
        if (currCount > maxCount) {
            maxCount = currCount;
        }
    }

    cout << maxCount << endl;

    return 0;
}