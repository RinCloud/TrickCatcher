#include <iostream>
#include <vector>
#include <algorithm>

using namespace std;

int main() {
    int N;
    cin >> N;

    vector<int> monsters(N+1);
    for (int i = 0; i <= N; i++) {
        cin >> monsters[i];
    }

    vector<int> heroes(N);
    for (int i = 0; i < N; i++) {
        cin >> heroes[i];
    }

    int maxMonsters = 0;

    for (int i = 0; i < N; i++) {
        int defeatedMonsters = min(monsters[i], heroes[i]);
        maxMonsters += defeatedMonsters;
        monsters[i] -= defeatedMonsters;

        int extraDefeatedMonsters = min(monsters[i+1], heroes[i] - defeatedMonsters);
        maxMonsters += extraDefeatedMonsters;
        monsters[i+1] -= extraDefeatedMonsters;
    }

    cout << maxMonsters << endl;

    return 0;
}