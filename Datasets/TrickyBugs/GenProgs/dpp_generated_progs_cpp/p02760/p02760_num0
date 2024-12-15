#include <iostream>
#include <vector>
#include <unordered_set>
using namespace std;

bool checkBingo(const vector<vector<int>>& bingo, const unordered_set<int>& chosen) {
    // Check rows
    for (int i = 0; i < 3; i++) {
        if (chosen.count(bingo[i][0]) && chosen.count(bingo[i][1]) && chosen.count(bingo[i][2])) {
            return true;
        }
    }
    
    // Check columns
    for (int j = 0; j < 3; j++) {
        if (chosen.count(bingo[0][j]) && chosen.count(bingo[1][j]) && chosen.count(bingo[2][j])) {
            return true;
        }
    }
    
    // Check diagonals
    if (chosen.count(bingo[0][0]) && chosen.count(bingo[1][1]) && chosen.count(bingo[2][2])) {
        return true;
    }
    if (chosen.count(bingo[0][2]) && chosen.count(bingo[1][1]) && chosen.count(bingo[2][0])) {
        return true;
    }
    
    return false;
}

int main() {
    vector<vector<int>> bingo(3, vector<int>(3));
    unordered_set<int> chosen;
    
    for (int i = 0; i < 3; i++) {
        for (int j = 0; j < 3; j++) {
            cin >> bingo[i][j];
        }
    }
    
    int N;
    cin >> N;
    
    for (int k = 0; k < N; k++) {
        int num;
        cin >> num;
        chosen.insert(num);
    }
    
    if (checkBingo(bingo, chosen)) {
        cout << "Yes" << endl;
    } else {
        cout << "No" << endl;
    }
    
    return 0;
}