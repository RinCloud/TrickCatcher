#include <iostream>
#include <string>
#include <unordered_set>

using namespace std;

int main() {
    string S;
    cin >> S;

    unordered_set<char> charSet;

    for (char c : S) {
        if (charSet.count(c) > 0) {
            cout << "no" << endl;
            return 0;
        }
        charSet.insert(c);
    }

    cout << "yes" << endl;

    return 0;
}