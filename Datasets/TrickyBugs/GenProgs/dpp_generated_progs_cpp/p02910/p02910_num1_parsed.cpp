#include <iostream>
#include <string>

using namespace std;

int main() {
    string S;
    cin >> S;

    bool easilyPlayable = true;
    for (int i = 0; i < S.length(); i++) {
        if ((i % 2 == 0 && (S[i] == 'L')) || (i % 2 != 0 && (S[i] == 'R'))) {
            easilyPlayable = false;
            break;
        }
    }

    if (easilyPlayable) {
        cout << "Yes";
    } else {
        cout << "No";
    }

    return 0;
}