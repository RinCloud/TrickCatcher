#include <iostream>
#include <vector>
#include <unordered_set>

using namespace std;

bool checkBingo(vector<vector<int>>& bingo, vector<int>& nums) {
    unordered_set<int> marked;

    // Check rows
    for(int i=0; i<3; i++) {
        unordered_set<int> row;

        for(int j=0; j<3; j++)
            row.insert(bingo[i][j]);

        int cnt = 0;
        for(int num : nums) {
            if(row.count(num) && !marked.count(num)) {
                cnt++;
                marked.insert(num);
            }
        }

        if(cnt == 3)
            return true;
    }

    // Check columns
    for(int j=0; j<3; j++) {
        unordered_set<int> col;

        for(int i=0; i<3; i++)
            col.insert(bingo[i][j]);

        int cnt = 0;
        for(int num : nums) {
            if(col.count(num) && !marked.count(num)) {
                cnt++;
                marked.insert(num);
            }
        }

        if(cnt == 3)
            return true;
    }

    // Check diagonals
    unordered_set<int> diagonal1{bingo[0][0], bingo[1][1], bingo[2][2]};
    unordered_set<int> diagonal2{bingo[0][2], bingo[1][1], bingo[2][0]};

    int cnt1 = 0, cnt2 = 0;
    for(int num : nums) {
        if(diagonal1.count(num) && !marked.count(num)) {
            cnt1++;
            marked.insert(num);
        }
        if(diagonal2.count(num) && !marked.count(num)) {
            cnt2++;
            marked.insert(num);
        }
    }

    if(cnt1 == 3 || cnt2 == 3)
        return true;

    return false;
}

int main() {
    vector<vector<int>> bingo(3, vector<int>(3));
    vector<int> nums;
    int N;

    // Read bingo card
    for(int i=0; i<3; i++) {
        for(int j=0; j<3; j++)
            cin >> bingo[i][j];
    }

    // Read N and chosen numbers
    cin >> N;
    nums.resize(N);
    for(int i=0; i<N; i++)
        cin >> nums[i];

    // Check if we have a bingo
    if(checkBingo(bingo, nums))
        cout << "Yes\n";
    else
        cout << "No\n";

    return 0;
}