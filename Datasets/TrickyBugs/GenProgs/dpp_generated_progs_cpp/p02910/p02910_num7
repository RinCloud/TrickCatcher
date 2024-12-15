#include <iostream>
#include <string>

using namespace std;

int main() {
    string S;
    cin >> S;

    bool isEasilyPlayable = true;
    for (int i = 0; i < S.length(); i++) {
        if ((i + 1) % 2 == 1 && (S[i] == 'L' || S[i] == 'R')) {
            isEasilyPlayable = false;
            break;
        } else if ((i + 1) % 2 == 0 && (S[i] == 'U' || S[i] == 'D')) {
            isEasilyPlayable = false;
            break;
        }
    }

    if (isEasilyPlayable) {
        cout << "Yes" << endl;
    } else {
        cout << "No" << endl;
    }

    return 0;
}