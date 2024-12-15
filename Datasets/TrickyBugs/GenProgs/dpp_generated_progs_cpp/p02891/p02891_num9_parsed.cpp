#include <iostream>
#include <string>

using namespace std;

int main() {
    string S;
    int K;

    // Read input
    cin >> S >> K;

    // Count the number of adjacent equal characters in S
    int count = 0;
    for (int i = 1; i < S.length(); i++) {
        if (S[i] == S[i - 1]) {
            count++;
        }
    }

    // Calculate the minimum number of operations required
    int operations = 0;
    if (count > 0) {
        operations = (count + 1) * K / 2;
    }

    // Output the result
    cout << operations << endl;

    return 0;
}