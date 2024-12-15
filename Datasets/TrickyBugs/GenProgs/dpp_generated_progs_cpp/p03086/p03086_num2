#include <iostream>
#include <string>
using namespace std;

int longestACGT(string S) {
    int longest = 0;
    int current = 0;
    for (int i = 0; i < S.length(); i++) {
        if (S[i] == 'A' || S[i] == 'C' || S[i] == 'G' || S[i] == 'T') {
            current++;
        } else {
            current = 0;
        }
        if (current > longest) {
            longest = current;
        }
    }
    return longest;
}

int main() {
    string S;
    cin >> S;
    cout << longestACGT(S) << endl;
    return 0;
}