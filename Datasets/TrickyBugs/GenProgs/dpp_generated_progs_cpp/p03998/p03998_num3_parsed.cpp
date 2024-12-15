#include <iostream>
#include <string>

using namespace std;

int main() {
    string S_A, S_B, S_C;
    cin >> S_A >> S_B >> S_C;

    int turn = 0;
    while (true) {
        if (turn == 0) {
            if (S_A.empty()) {
                cout << "A" << endl;
                break;
            }
            char card = S_A[0];
            S_A = S_A.substr(1);
            if (card == 'a') {
                turn = 0;
            } else if (card == 'b') {
                turn = 1;
            } else {
                turn = 2;
            }
        } else if (turn == 1) {
            if (S_B.empty()) {
                cout << "B" << endl;
                break;
            }
            char card = S_B[0];
            S_B = S_B.substr(1);
            if (card == 'a') {
                turn = 0;
            } else if (card == 'b') {
                turn = 1;
            } else {
                turn = 2;
            }
        } else {
            if (S_C.empty()) {
                cout << "C" << endl;
                break;
            }
            char card = S_C[0];
            S_C = S_C.substr(1);
            if (card == 'a') {
                turn = 0;
            } else if (card == 'b') {
                turn = 1;
            } else {
                turn = 2;
            }
        }
    }

    return 0;
}