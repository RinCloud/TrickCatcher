#include <iostream>
#include <string>

using namespace std;

char findWinner(string sA, string sB, string sC) {
    int turn = 0;
    int lenA = sA.length();
    int lenB = sB.length();
    int lenC = sC.length();

    while (true) {
        if (turn == 0) {
            if (lenA == 0) {
                return 'A';
            }
            char card = sA[0];
            sA = sA.substr(1);
            turn = card - 'a';
        } else if (turn == 1) {
            if (lenB == 0) {
                return 'B';
            }
            char card = sB[0];
            sB = sB.substr(1);
            turn = card - 'a';
        } else if (turn == 2) {
            if (lenC == 0) {
                return 'C';
            }
            char card = sC[0];
            sC = sC.substr(1);
            turn = card - 'a';
        }
        lenA = sA.length();
        lenB = sB.length();
        lenC = sC.length();
    }
}

int main() {
    string sA, sB, sC;
    cin >> sA >> sB >> sC;

    char winner = findWinner(sA, sB, sC);
    cout << winner << endl;

    return 0;
}