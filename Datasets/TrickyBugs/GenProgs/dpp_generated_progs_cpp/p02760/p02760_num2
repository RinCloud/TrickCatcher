#include <iostream>
#include <vector>
using namespace std;

bool isBingo(vector<vector<int>>& grid, vector<int>& chosenNumbers) {
    // Check rows
    for (int i = 0; i < 3; i++) {
        bool bingo = true;
        for (int j = 0; j < 3; j++) {
            if (find(chosenNumbers.begin(), chosenNumbers.end(), grid[i][j]) == chosenNumbers.end()) {
                bingo = false;
                break;
            }
        }
        if (bingo) {
            return true;
        }
    }
    // Check columns
    for (int j = 0; j < 3; j++) {
        bool bingo = true;
        for (int i = 0; i < 3; i++) {
            if (find(chosenNumbers.begin(), chosenNumbers.end(), grid[i][j]) == chosenNumbers.end()) {
                bingo = false;
                break;
            }
        }
        if (bingo) {
            return true;
        }
    }
    // Check diagonals
    if (find(chosenNumbers.begin(), chosenNumbers.end(), grid[0][0]) != chosenNumbers.end() &&
        find(chosenNumbers.begin(), chosenNumbers.end(), grid[1][1]) != chosenNumbers.end() &&
        find(chosenNumbers.begin(), chosenNumbers.end(), grid[2][2]) != chosenNumbers.end()) {
        return true;
    }
    if (find(chosenNumbers.begin(), chosenNumbers.end(), grid[0][2]) != chosenNumbers.end() &&
        find(chosenNumbers.begin(), chosenNumbers.end(), grid[1][1]) != chosenNumbers.end() &&
        find(chosenNumbers.begin(), chosenNumbers.end(), grid[2][0]) != chosenNumbers.end()) {
        return true;
    }

    return false;
}

int main() {
    vector<vector<int>> grid(3, vector<int>(3));
    for (int i = 0; i < 3; i++) {
        for (int j = 0; j < 3; j++) {
            cin >> grid[i][j];
        }
    }

    int N;
    cin >> N;

    vector<int> chosenNumbers(N);
    for (int i = 0; i < N; i++) {
        cin >> chosenNumbers[i];
    }

    if (isBingo(grid, chosenNumbers)) {
        cout << "Yes" << endl;
    } else {
        cout << "No" << endl;
    }

    return 0;
}