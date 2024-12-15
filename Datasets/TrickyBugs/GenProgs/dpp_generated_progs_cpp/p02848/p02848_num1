#include <iostream>
#include <string>
using namespace std;

string shiftStringByN(string S, int N) {
    int len = S.length();
    for (int i = 0; i < len; i++) {
        int ascii = S[i] - 'A';
        int shifted_ascii = (ascii + N) % 26;
        S[i] = shifted_ascii + 'A';
    }
    return S;
}

int main() {
    int N;
    string S;
    cin >> N;
    cin >> S;
    cout << shiftStringByN(S, N) << endl;
    return 0;
}