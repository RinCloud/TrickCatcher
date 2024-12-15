#include <iostream>
#include <string>
#include <vector>

using namespace std;

int main() {
    string S;
    cin >> S;

    int N = S.size();

    bool E[1 << 8] = {false}; // initialize the array with false values

    for (int i = 0; i < N; ++i) {
        E[S[i]] = true;
    }

    // add a condition to check if both 'N' and 'S' are present or both 'W' and 'E' are present
    if ((E['N'] && !E['S']) || (!E['N'] && E['S']) || (E['W'] && !E['E']) || (!E['W'] && E['E'])) {
        cout << "No" << endl;
    } else {
        cout << "Yes" << endl;
    }

    return 0;
}
