#include <iostream>
#include <unordered_set>

using namespace std;

bool checkBingo(int bingoCard[3][3], unordered_set<int>& chosenNumbers) {
    // Check rows
    for (int i = 0; i < 3; i++) {
        if (chosenNumbers.count(bingoCard[i][0]) && chosenNumbers.count(bingoCard[i][1]) && chosenNumbers.count(bingoCard[i][2])) {
            return true;
        }
    }

    // Check columns
    for (int j = 0; j < 3; j++) {
        if (chosenNumbers.count(bingoCard[0][j]) && chosenNumbers.count(bingoCard[1][j]) && chosenNumbers.count(bingoCard[2][j])) {
            return true;
        }
    }

    // Check diagonals
    if (chosenNumbers.count(bingoCard[0][0]) && chosenNumbers.count(bingoCard[1][1]) && chosenNumbers.count(bingoCard[2][2])) {
        return true;
    }
    if (chosenNumbers.count(bingoCard[0][2]) && chosenNumbers.count(bingoCard[1][1]) && chosenNumbers.count(bingoCard[2][0])) {
        return true;
    }

    return false;
}

int main() {
    int bingoCard[3][3];
    for (int i = 0; i < 3; i++) {
        for (int j = 0; j < 3; j++) {
            cin >> bingoCard[i][j];
        }
    }

    int N;
    cin >> N;

    unordered_set<int> chosenNumbers;
    for (int i = 0; i < N; i++) {
        int number;
        cin >> number;
        chosenNumbers.insert(number);
    }

    if (checkBingo(bingoCard, chosenNumbers)) {
        cout << "Yes" << endl;
    } else {
        cout << "No" << endl;
    }

    return 0;
}