#include <iostream>
#include <unordered_set>
using namespace std;

int main() {
    int N;
    cin >> N;

    unordered_set<string> wordSet;
    string lastWord;
    bool isValid = true;

    for (int i = 0; i < N; i++) {
        string word;
        cin >> word;

        if (i == 0) {
            lastWord = word;
        } else {
            if (wordSet.count(word) != 0 || word[0] != lastWord.back()) {
                isValid = false;
                break;
            }

            lastWord = word;
        }

        wordSet.insert(word);
    }

    if (isValid) {
        cout << "Yes" << endl;
    } else {
        cout << "No" << endl;
    }

    return 0;
}