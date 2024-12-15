#include <iostream>
#include <string>

using namespace std;

char determineWinner(string sA, string sB, string sC) {
    int player = 0;
    while (true) {
        if (player == 0) {
            if (sA.empty()) return 'A';
            char topCard = sA[0];
            sA.erase(0, 1);
            if (topCard == 'a') player = 0;
            else if (topCard == 'b') player = 1;
            else player = 2;
            
        } else if (player == 1) {
            if (sB.empty()) return 'B';
            char topCard = sB[0];
            sB.erase(0, 1);
            if (topCard == 'a') player = 0;
            else if (topCard == 'b') player = 1;
            else player = 2;
            
        } else {
            if (sC.empty()) return 'C';
            char topCard = sC[0];
            sC.erase(0, 1);
            if (topCard == 'a') player = 0;
            else if (topCard == 'b') player = 1;
            else player = 2;
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
