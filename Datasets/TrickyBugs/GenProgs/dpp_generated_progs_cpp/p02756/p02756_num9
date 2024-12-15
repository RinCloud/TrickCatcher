#include <iostream>
#include <string>
using namespace std;

int main() {
    string S;
    cin >> S;

    int Q;
    cin >> Q;

    int T, F;
    char C;

    for (int i = 0; i < Q; i++) {
        cin >> T;
        if (T == 1) {
            // Reverse the string S
            reverse(S.begin(), S.end());
        } else {
            cin >> F >> C;
            if (F == 1) {
                // Add C to the beginning of S
                S = C + S;
            } else {
                // Add C to the end of S
                S += C;
            }
        }
    }

    cout << S << endl;

    return 0;
}