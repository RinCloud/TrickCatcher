#include <iostream>
#include <queue>
using namespace std;

int main() {
    string S_A, S_B, S_C;
    cin >> S_A >> S_B >> S_C;

    queue<int> deck_A, deck_B, deck_C;

    for (int i = 0; i < S_A.size(); i++) {
        deck_A.push(S_A[i]);
    }

    for (int i = 0; i < S_B.size(); i++) {
        deck_B.push(S_B[i]);
    }

    for (int i = 0; i < S_C.size(); i++) {
        deck_C.push(S_C[i]);
    }

    char current_player = 'A';

    while (!deck_A.empty() && !deck_B.empty() && !deck_C.empty()) {
        if (current_player == 'A') {
            char card_top = deck_A.front();
            deck_A.pop();
            current_player = card_top;
        } else if (current_player == 'B') {
            char card_top = deck_B.front();
            deck_B.pop();
            current_player = card_top;
        } else if (current_player == 'C') {
            char card_top = deck_C.front();
            deck_C.pop();
            current_player = card_top;
        }
    }

    if (deck_A.empty()) {
        cout << "A" << endl;
    } else if (deck_B.empty()) {
        cout << "B" << endl;
    } else if (deck_C.empty()) {
        cout << "C" << endl;
    }

    return 0;
}