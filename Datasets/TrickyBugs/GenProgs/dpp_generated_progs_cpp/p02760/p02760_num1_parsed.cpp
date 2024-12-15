#include <iostream>
#include <vector>

using namespace std;

bool isBingo(vector<vector<int>>& grid) {
    bool bingo = false;
    
    // Check rows
    for (int i = 0; i < 3; i++) {
        if (grid[i][0] == grid[i][1] && grid[i][1] == grid[i][2]) {
            bingo = true;
            break;
        }
    }
    
    // Check columns
    if (!bingo) {
        for (int j = 0; j < 3; j++) {
            if (grid[0][j] == grid[1][j] && grid[1][j] == grid[2][j]) {
                bingo = true;
                break;
            }
        }
    }
    
    // Check diagonals
    if (!bingo) {
        if (grid[0][0] == grid[1][1] && grid[1][1] == grid[2][2]) {
            bingo = true;
        } else if (grid[0][2] == grid[1][1] && grid[1][1] == grid[2][0]) {
            bingo = true;
        }
    }
    
    return bingo;
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
    
    // Mark the chosen numbers on the grid
    for (int i = 0; i < 3; i++) {
        for (int j = 0; j < 3; j++) {
            for (int k = 0; k < N; k++) {
                if (grid[i][j] == chosenNumbers[k]) {
                    grid[i][j] = -1; // Mark the number as chosen
                    break;
                }
            }
        }
    }
    
    if (isBingo(grid)) {
        cout << "Yes" << endl;
    } else {
        cout << "No" << endl;
    }
    
    return 0;
}