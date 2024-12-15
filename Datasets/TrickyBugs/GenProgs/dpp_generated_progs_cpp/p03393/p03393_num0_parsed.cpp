#include <iostream>
#include <algorithm>
#include <string>

using namespace std;

string nextDiverseWord(const string& word) {
    string nextWord = word;

    for (int i = nextWord.length() - 1; i >= 0; i--) {
        if (nextWord[i] != 'z') {
            nextWord[i]++;
            break;
        }
        else {
            nextWord[i] = 'a';
        }
    }

    for (int i = 1; i < nextWord.length(); i++) {
        if (nextWord[i] <= nextWord[i - 1]) {
            nextWord[i] = nextWord[i - 1] + 1;
        }
    }

    return (nextWord == word) ? "-1" : nextWord;
}

int main() {
    string S;
    cin >> S;

    string next = nextDiverseWord(S);
    cout << next << endl;

    return 0;
}