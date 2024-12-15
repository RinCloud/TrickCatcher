#include <iostream>
#include <string>

using namespace std;

int main() {
    string S;
    cin >> S;

    bool isEasilyPlayable = true;
    int length = S.length();

    for (int i = 0; i < length; i++) {
        if (i % 2 == 0) {
            if (S[i] == 'R') {
                isEasilyPlayable = false;
                break;
            }
        } else {
            if (S[i] == 'L') {
                isEasilyPlayable = false;
                break;
            }
        }
    }

    if (isEasilyPlayable) {
        cout << "Yes";
    } else {
        cout << "No";
    }

    return 0;
}