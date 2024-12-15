#include <iostream>
#include <unordered_set>
#include <string>
using namespace std;

int main() {
    int N;
    cin >> N;

    unordered_set<string> seen_words;
    string previous_word;

    for (int i = 0; i < N; i++) {
        string new_word;
        cin >> new_word;

        if (seen_words.count(new_word) || (i > 0 && previous_word[previous_word.size() - 1] != new_word[0])) {
            cout << "No" << endl;
            return 0;
        }

        seen_words.insert(new_word);
        previous_word = new_word;
    }

    cout << "Yes" << endl;
    return 0;
}