#include <iostream>
#include <string>

using namespace std;

char getWinner(const string& S_A, const string& S_B, const string& S_C) {
    int turn = 0;
    int idx_A = 0, idx_B = 0, idx_C = 0;

    while (true) {
        if (turn % 3 == 0) {
            if (idx_A >= S_A.length()) {
                return 'A';
            }
            if (S_A[idx_A] == 'a') {
                turn++;
            }
            idx_A++;
        } else if (turn % 3 == 1) {
            if (idx_B >= S_B.length()) {
                return 'B';
            }
            if (S_B[idx_B] == 'b') {
                turn++;
            }
            idx_B++;
        } else {
            if (idx_C >= S_C.length()) {
                return 'C';
            }
            if (S_C[idx_C] == 'c') {
                turn++;
            }
            idx_C++;
        }
    }
}

int main() {
    string S_A, S_B, S_C;
    cin >> S_A >> S_B >> S_C;

    char winner = getWinner(S_A, S_B, S_C);
    cout << winner << endl;

    return 0;
}