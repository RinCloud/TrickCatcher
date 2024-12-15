#include <iostream>
#include <string>

using namespace std;

int main() {
    // Read input
    int N;
    string S;
    cin >> N >> S;

    // Check if S is a concatenation of two copies of some string
    bool isConcatenation = false;
    for (int i = 1; i < N; i++) {
        if (S.substr(0, i) == S.substr(i, i)) {
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