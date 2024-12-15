#include <iostream>
#include <vector>
using namespace std;

bool checkBingo(vector<vector<int>>& bingo, int num) {
    for (int i = 0; i < 3; i++) {
        if (bingo[i][0] == num && bingo[i][1] == num && bingo[i][2] == num)
            return true;
        if (bingo[0][i] == num && bingo[1][i] == num && bingo[2][i] == num)
            return true;
    }
    if (bingo[0][0] == num && bingo[1][1] == num && bingo[2][2] == num)
        return true;
    if (bingo[0][2] == num && bingo[1][1] == num && bingo[2][0] == num)
        return true;
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
    vector<int> chosen(N);
    for (int i = 0; i < N; i++) {
        cin >> chosen[i];
    }
    for (int i = 0; i < N; i++) {
        if (checkBingo(bingo, chosen[i])) {
            cout << "Yes" << endl;
            return 0;
        }
    }
    cout << "No" << endl;
    return 0;
}