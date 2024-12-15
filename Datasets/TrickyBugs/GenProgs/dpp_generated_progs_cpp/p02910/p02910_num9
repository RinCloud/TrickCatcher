#include <iostream>
#include <string>

using namespace std;

int main() {
    string S;
    cin >> S;

    bool isEasilyPlayable = true;

    for (int i = 0; i < S.length(); i++) {
        if ((i % 2 == 0 && (S[i] == 'L' || S[i] == 'R')) || (i % 2 != 0 && (S[i] == 'U' || S[i] == 'D'))) {
            continue;
        }
        else {
            isEasilyPlayable = false;
            break;
        }
    }

    if (isEasilyPlayable) {
        cout << "Yes" << endl;
    }
    else {
        cout << "No" << endl;
    }

    return 0;
}