#include <iostream>
#include <string>
#include <vector>

using namespace std;

int main() {
    string S;
    cin >> S;

    int N = S.size();

    bool E[1 << 8] = {false}; // Initialize array with all elements set to false
    for (int i = 0; i < N; ++i) {
        E[S[i]] = true;
    }

    cout << (!(E['N'] ^ E['S']) && !(E['W'] ^ E['E']) ? "Yes" : "No") << endl;

    return 0;
}
