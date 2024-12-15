#include <iostream>
#include <vector>
#include <unordered_set>

using namespace std;

bool isBingo(vector<vector<int>>& bingo, unordered_set<int>& numbers)
{
    for (int i = 0; i < 3; i++) {
        if (numbers.count(bingo[i][0]) && numbers.count(bingo[i][1]) && numbers.count(bingo[i][2])) {
            return true;
        }
        if (numbers.count(bingo[0][i]) && numbers.count(bingo[1][i]) && numbers.count(bingo[2][i])) {
            return true;
        }
    }
    if (numbers.count(bingo[0][0]) && numbers.count(bingo[1][1]) && numbers.count(bingo[2][2])) {
        return true;
    }
    if (numbers.count(bingo[0][2]) && numbers.count(bingo[1][1]) && numbers.count(bingo[2][0])) {
        return true;
    }
    return false;
}

int main()
{
    vector<vector<int>> bingo(3, vector<int>(3));
    unordered_set<int> numbers;
    for (int i = 0; i < 3; i++) {
        for (int j = 0; j < 3; j++) {
            cin >> bingo[i][j];
        }
    }
    int N;
    cin >> N;
    for (int i = 0; i < N; i++) {
        int num;
        cin >> num;
        numbers.insert(num);
    }
    if (isBingo(bingo, numbers)) {
        cout << "Yes" << endl;
    } else {
        cout << "No" << endl;
    }
    return 0;
}