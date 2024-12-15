#include <iostream>
#include <string>

using namespace std;

int minCharactersToChange(string S, string T) {
    int minLength = T.length();
    int maxLength = S.length();
    int minChanges = maxLength;

    for (int i = 0; i <= maxLength - minLength; i++) {
        int changes = 0;

        for (int j = 0; j < minLength; j++) {
            if (S[i + j] != T[j]) {
                changes++;
            }
        }

        if (changes < minChanges) {
            minChanges = changes;
        }
    }

    return minChanges;
}

int main() {
    string S, T;
    cin >> S >> T;
    cout << minCharactersToChange(S, T) << endl;
    return 0;
}