#include <iostream>
#include <string>
#include <vector>

using namespace std;

int main() {
    string S;
    cin >> S;

    int N = S.size();

    // Removed the incorrect code assigning values to E array and changed its type to bool
    bool E[256] = { false };

    for (int i = 0; i < N; ++i) {
        // Changed condition to mark the direction as true
        if (S[i] == 'N') E['N'] = true;
        if (S[i] == 'S') E['S'] = true;
        if (S[i] == 'W') E['W'] = true;
        if (S[i] == 'E') E['E'] = true;
    }

    // removed XOR (^) operator and added conditions based on boolean values of E[] array
    if ((E['N'] && E['S']) || (!E['N'] && !E['S'])) {
        if ((E['W'] && E['E']) || (!E['W'] && !E['E'])) {
            cout << "Yes" << endl;
        } else {
            cout << "No" << endl;
        }
    } else {
        cout << "No" << endl;
    }

    return 0;
}
