#include <iostream>
#include <vector>
#include <algorithm>
using namespace std;

bool isBingo(vector<vector<int>>& bingo, int N, vector<int>& numbers) {
    for (int i = 0; i < 3; i++) {
        if (bingo[i][0] == numbers[0] && bingo[i][1] == numbers[1] && bingo[i][2] == numbers[2]) {
            return true;
        }
    }
    
    for (int j = 0; j < 3; j++) {
        if (bingo[0][j] == numbers[0] && bingo[1][j] == numbers[1] && bingo[2][j] == numbers[2]) {
            return true;
        }
    }
    
    if (bingo[0][0] == numbers[0] && bingo[1][1] == numbers[1] && bingo[2][2] == numbers[2]) {
        return true;
    }
    
    if (bingo[0][2] == numbers[0] && bingo[1][1] == numbers[1] && bingo[2][0] == numbers[2]) {
        return true;
    }
    
    return false;
}

int main() {
    vector<vector<int>> bingo(3, vector<int>(3));
    for (int i = 0; i < 3; i++) {
        for (int j = 0; j < 3; j++) {
            cin >> bingo[i][j];
        }
    }
    
    int N;
    cin >> N;
    
    vector<int> numbers(N);
    for (int i = 0; i < N; i++) {
        cin >> numbers[i];
    }
    
    if (isBingo(bingo, N, numbers)) {
        cout << "Yes" << endl;
    } else {
        cout << "No" << endl;
    }
    
    return 0;
}