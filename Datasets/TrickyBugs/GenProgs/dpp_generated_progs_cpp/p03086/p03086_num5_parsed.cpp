#include<iostream>
#include<string>
using namespace std;

int longestACGT(string S) {
    int maxLength = 0;
    int currLength = 0;

    for (int i = 0; i < S.length(); i++) {
        if (S[i] == 'A' || S[i] == 'C' || S[i] == 'G' || S[i] == 'T') {
            currLength++;
        } else {
            maxLength = max(maxLength, currLength);
            currLength = 0;
        }
    }

    maxLength = max(maxLength, currLength);

    return maxLength;
}

int main() {
    string S;
    cin >> S;

    int result = longestACGT(S);
    cout << result << endl;

    return 0;
}