#include <iostream>
#include <vector>
#include <algorithm>

using namespace std;

bool checkBingo(vector<vector<int>>& card) {
    // Check rows
    for (int i = 0; i < 3; i++) {
        if (card[i][0] == card[i][1] && card[i][1] == card[i][2]) {
            return true;
        }
    }
    
    // Check columns
    for (int i = 0; i < 3; i++) {
        if (card[0][i] == card[1][i] && card[1][i] == card[2][i]) {
            return true;
        }
    }
    
    // Check diagonals
    if (card[0][0] == card[1][1] && card[1][1] == card[2][2]) {
        return true;
    }
    
    if (card[0][2] == card[1][1] && card[1][1] == card[2][0]) {
        return true;
    }
    
    return false;
}

int main() {
    vector<vector<int>> card(3, vector<int>(3));
    for (int i = 0; i < 3; i++) {
        for (int j = 0; j < 3; j++) {
            cin >> card[i][j];
        }
    }
    
    int N;
    cin >> N;
    
    vector<int> numbers(N);
    for (int i = 0; i < N; i++) {
        cin >> numbers[i];
    }
    
    vector<vector<bool>> marked(3, vector<bool>(3, false));
    
    for (int k = 0; k < N; k++) {
        int num = numbers[k];
        for (int i = 0; i < 3; i++) {
            for (int j = 0; j < 3; j++) {
                if (card[i][j] == num) {
                    marked[i][j] = true;
                }
            }
        }
    }
    
    if (checkBingo(marked)) {
        cout << "Yes" << endl;
    } else {
        cout << "No" << endl;
    }
    
    return 0;
}