#include <iostream>
#include <unordered_set>
using namespace std;

int main() {
    int N;
    cin >> N;

    unordered_set<string> words;
    string prev_word;
    bool valid = true;

    for (int i = 0; i < N; i++) {
        string word;
        cin >> word;

        if (words.find(word) != words.end() || (i > 0 && prev_word[prev_word.length() - 1] != word[0])) {
            valid = false;
            break;
        }

        words.insert(word);
        prev_word = word;
    }

    if (valid) {
        cout << "Yes";
    } else {
        cout << "No";
    }

    return 0;
}