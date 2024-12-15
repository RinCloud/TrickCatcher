#include <iostream>
#include <string>
#include <vector>

using namespace std;

int main() {
    string S;
    cin >> S;

    int N = S.size();

    bool E[1 << 8] = {false}; // Initialize all elements of E to false
    for (int i = 0; i < N; ++i) {
        E[S[i]] = true;
    }

    // Updated condition to check if N and S appear exactly twice and W and E appear exactly twice
    cout << (E['N'] == E['S'] && E['W'] == E['E'] ? "Yes" : "No") << endl;

    return 0;
}
