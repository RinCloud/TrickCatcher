#include <iostream>
#include <unordered_set>
using namespace std;

int main() {
    string S;
    cin >> S;

    unordered_set<char> uniqueCharacters;
    bool allDifferent = true;

    for (char c : S) {
        if (uniqueCharacters.count(c) > 0) {
            allDifferent = false;
            break;
        }

        uniqueCharacters.insert(c);
    }

    if (allDifferent) {
        cout << "yes" << endl;
    } else {
        cout << "no" << endl;
    }

    return 0;
}