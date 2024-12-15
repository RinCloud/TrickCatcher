#include <iostream>
#include <vector>
#include <unordered_set>

using namespace std;

bool checkBingo(const vector<vector<int>>& sheet) {
    unordered_set<int> markedNumbers;
    int rowCount = 0;
    int colCount = 0;
    int diagCount = 0;
    int revDiagCount = 0;
    
    for (int i = 0; i < 3; i++) {
        for (int j = 0; j < 3; j++) {
            if (markedNumbers.count(sheet[i][j])) {
                rowCount++;
            }
            if (markedNumbers.count(sheet[j][i])) {
                colCount++;
            }
        }
        if (markedNumbers.count(sheet[i][i])) {
            diagCount++;
        }
        if (markedNumbers.count(sheet[i][2-i])) {
            revDiagCount++;
        }
        if (rowCount == 3 || colCount == 3 || diagCount == 3 || revDiagCount == 3) {
            return true;
        }
        rowCount = 0;
        colCount = 0;
        diagCount = 0;
        revDiagCount = 0;
    }
    
    return false;
}

int main() {
    vector<vector<int>> sheet;
    for (int i = 0; i < 3; i++) {
        vector<int> row(3);
        for (int j = 0; j < 3; j++) {
            cin >> row[j];
        }
        sheet.push_back(row);
    }
    
    int N;
    cin >> N;
    
    unordered_set<int> numbers;
    for (int i = 0; i < N; i++) {
        int num;
        cin >> num;
        numbers.insert(num);
    }
    
    for (int i = 0; i < 3; i++) {
        for (int j = 0; j < 3; j++) {
            if (numbers.count(sheet[i][j])) {
                numbers.erase(sheet[i][j]);
            }
        }
    }
    
    cout << (checkBingo(sheet) ? "Yes" : "No") << endl;
    
    return 0;
}