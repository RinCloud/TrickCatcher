#include <iostream>
#include <string>

using namespace std;

int main() {
    string S;
    cin >> S;

    int blackCount = 0;
    int whiteCount = 0;

    for (int i = 0; i < S.length(); i++) {
        if (S[i] == 'B') {
            blackCount++;
        } else {
            whiteCount++;
        }
    }

    int minStones = min(blackCount, whiteCount);

    cout << minStones << endl;

    return 0;
}