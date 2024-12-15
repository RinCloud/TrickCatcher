#include <iostream>
#include <algorithm>
using namespace std;

string getNextDiverseWord(string S) {
    if (S.length() == 26) {
        return "-1";
    }
    for (int i = S.length() - 1; i >= 0; i--) {
        if (S[i] < 'z') {
            S[i]++;
            for (int j = i + 1; j < S.length(); j++) {
                S[j] = 'a';
            }
            break;
        }
    }
    return S;
}

int main() {
    string S;
    cin >> S;
    string nextWord = getNextDiverseWord(S);
    cout << nextWord << endl;
    return 0;
}