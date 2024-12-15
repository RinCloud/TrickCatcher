#include <iostream>
#include <string>

using namespace std;

int main() {
    int N;
    string S;

    // Read input
    cin >> N >> S;

    bool isConcatenation = false;

    // Check if S is a concatenation of two copies of some string
    for (int i = 1; i <= N / 2; i++) {
        string T = S.substr(0, i);

        // Check if T + T equals S
        if (T + T == S) {
            isConcatenation = true;
            break;
        }
    }

    // Print result
    if (isConcatenation) {
        cout << "Yes" << endl;
    } else {
        cout << "No" << endl;
    }

    return 0;
}