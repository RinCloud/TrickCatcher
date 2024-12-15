#include <iostream>

using namespace std;

char determineWinner(string S_A, string S_B, string S_C) {
    int player = 0;
    while (true) {
        if (player == 0) {
            if (S_A.empty()) {
                return 'A';
            }
            char card = S_A.front();
            S_A.erase(0, 1);
            player = card - 'a';
        } else if (player == 1) {
            if (S_B.empty()) {
                return 'B';
            }
            char card = S_B.front();
            S_B.erase(0, 1);
            player = card - 'a';
        } else {
            if (S_C.empty()) {
                return 'C';
            }
            char card = S_C.front();
            S_C.erase(0, 1);
            player = card - 'a';
        }
    }
}

int main() {
    string S_A, S_B, S_C;
    cin >> S_A >> S_B >> S_C;
    
    char winner = determineWinner(S_A, S_B, S_C);
    cout << winner << endl;
    
    return 0;
}