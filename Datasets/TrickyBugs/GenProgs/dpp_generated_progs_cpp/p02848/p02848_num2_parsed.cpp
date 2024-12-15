#include <iostream>
#include <string>

using namespace std;

string shiftStringByN(string S, int N) {
    string result = "";

    for (int i = 0; i < S.length(); i++) {
        // Shift the character by N
        char shiftedChar = ((S[i] - 'A') + N) % 26 + 'A';

        // Append the shifted character to the result
        result += shiftedChar;
    }

    return result;
}

int main() {
    // Read N from input
    int N;
    cin >> N;

    // Ignore the new line character
    cin.ignore();

    // Read S from input
    string S;
    getline(cin, S);

    // Shift each character of S by N and print the resulting string
    string result = shiftStringByN(S, N);
    cout << result << endl;

    return 0;
}
