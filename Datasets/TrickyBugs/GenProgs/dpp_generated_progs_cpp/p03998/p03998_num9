#include <iostream>
#include <string>

using namespace std;

char determineWinner(string sA, string sB, string sC) {
    int turn = 0;
    
    while (true) {
        if (turn == 0) {
            if (sA.empty()) {
                return 'A';
            } else {
                char card = sA[0];
                sA.erase(0, 1);
                if (card == 'a') {
                    turn = 0;
                } else if (card == 'b') {
                    turn = 1;
                } else {
                    turn = 2;
                }
            }
        } else if (turn == 1) {
            if (sB.empty()) {
                return 'B';
            } else {
                char card = sB[0];
                sB.erase(0, 1);
                if (card == 'a') {
                    turn = 0;
                } else if (card == 'b') {
                    turn = 1;
                } else {
                    turn = 2;
                }
            }
        } else {
            if (sC.empty()) {
                return 'C';
            } else {
                char card = sC[0];
                sC.erase(0, 1);
                if (card == 'a') {
                    turn = 0;
                } else if (card == 'b') {
                    turn = 1;
                } else {
                    turn = 2;
                }
            }
        }
    }
}

int main() {
    string sA, sB, sC;
    cin >> sA >> sB >> sC;

    char winner = determineWinner(sA, sB, sC);
    cout << winner << endl;

    return 0;
}