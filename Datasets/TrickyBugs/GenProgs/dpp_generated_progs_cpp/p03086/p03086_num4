#include <iostream>
#include <string>

using namespace std;

int main() {
    string S;
    cin >> S;

    int maxLen = 0;
    int currLen = 0;

    for (int i = 0; i < S.length(); i++) {
        char ch = S[i];
        if (ch == 'A' || ch == 'C' || ch == 'G' || ch == 'T') {
            currLen++;
            maxLen = max(maxLen, currLen);
        } else {
            currLen = 0;
        }
    }

    cout << maxLen << endl;

    return 0;
}