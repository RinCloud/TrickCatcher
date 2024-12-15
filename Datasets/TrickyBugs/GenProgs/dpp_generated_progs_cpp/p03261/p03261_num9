#include <iostream>
#include <unordered_set>
using namespace std;

int main() {
    int N;
    cin >> N;

    unordered_set<string> wordSet;
    string prevWord;
    bool valid = true;

    for (int i = 0; i < N; i++) {
        string word;
        cin >> word;

        if (i > 0 && prevWord[prevWord.length() - 1] != word[0]) {
            valid = false;
            break;
        }

        if (wordSet.count(word) > 0) {
            valid = false;
            break;
        }

        wordSet.insert(word);
        prevWord = word;
    }

    if (valid) {
        cout << "Yes" << endl;
    } else {
        cout << "No" << endl;
    }

    return 0;
}