#include <iostream>
#include <string>

using namespace std;

int main() {
    string S;
    cin >> S;

    int maxLen = 0;
    int currentLen = 0;
    for (char c : S) {
        if (c == 'A' || c == 'C' || c == 'G' || c == 'T') {
            currentLen++;
            maxLen = max(maxLen, currentLen);
        } else {
            currentLen = 0;
        }
    }

    cout << maxLen << endl;

    return 0;
}
