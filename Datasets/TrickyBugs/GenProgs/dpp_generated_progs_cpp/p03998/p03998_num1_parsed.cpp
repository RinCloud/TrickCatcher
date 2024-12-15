#include <iostream>
#include <string>

using namespace std;

int main() {
    string S_A, S_B, S_C;
    cin >> S_A >> S_B >> S_C;

    int turn = 0;
    while (true) {
        if (turn % 3 == 0) {
            if (S_A.empty()) {
                cout << "C" << endl;
                break;
            } else {
                char card = S_A[0];
                S_A.erase(0, 1);
                if (card == 'a') {
                    turn++;
                } else if (card == 'b') {
                    turn += 2;
                }
            }
        } else if (turn % 3 == 1) {
            if (S_B.empty()) {
                cout << "A" << endl;
                break;
            } else {
                char card = S_B[0];
                S_B.erase(0, 1);
                if (card == 'a') {
                    turn++;
                } else if (card == 'b') {
                    turn += 2;
                }
            }
        } else {
            if (S_C.empty()) {
                cout << "B" << endl;
                break;
            } else {
                char card = S_C[0];
                S_C.erase(0, 1);
                if (card == 'a') {
                    turn++;
                } else if (card == 'b') {
                    turn += 2;
                }
            }
        }
    }

    return 0;
}