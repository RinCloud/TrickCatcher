#include <iostream>
#include <vector>

using namespace std;

bool checkForDoublets(const vector<pair<int, int>>& diceRolls) {
    int count = 0;
    for (int i = 0; i < diceRolls.size() - 2; i++) {
        if (diceRolls[i].first == diceRolls[i].second &&
            diceRolls[i + 1].first == diceRolls[i + 1].second &&
            diceRolls[i + 2].first == diceRolls[i + 2].second) {
            count++;
        }
    }
    return count >= 1;
}

int main() {
    int N;
    cin >> N;

    vector<pair<int, int>> diceRolls(N);
    for (int i = 0; i < N; i++) {
        cin >> diceRolls[i].first >> diceRolls[i].second;
    }

    if (checkForDoublets(diceRolls)) {
        cout << "Yes" << endl;
    } else {
        cout << "No" << endl;
    }

    return 0;
}