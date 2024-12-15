#include <iostream>
#include <string>

using namespace std;

string shiftStringByN(string s, int N) {
    // Iterate over each character in the string
    for (int i = 0; i < s.length(); i++) {
        // Shift the character by N positions in alphabetical order
        s[i] = 'A' + (s[i] - 'A' + N) % 26;
    }

    return s;
}

int main() {
    // Read the input
    int N;
    string S;
    cin >> N >> S;

    // Shift each character of S by N in alphabetical order
    string result = shiftStringByN(S, N);

    // Print the resulting string
    cout << result << endl;

    return 0;
}