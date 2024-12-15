#include <iostream>
#include <vector>
#include <algorithm>

using namespace std;

int main() {
    int N;
    cin >> N;
    
    vector<int> towns(N + 1);
    for (int i = 0; i <= N; i++) {
        cin >> towns[i];
    }
    
    vector<int> heroes(N);
    for (int i = 0; i < N; i++) {
        cin >> heroes[i];
    }
    
    int totalMonsters = 0;
    for (int i = 0; i < N; i++) {
        int defeatedMonsters = min(towns[i], heroes[i]);
        totalMonsters += defeatedMonsters;
        
        int remainingMonsters = towns[i] - defeatedMonsters;
        int additionalDefeatedMonsters = min(remainingMonsters, heroes[i+1]);
        totalMonsters += additionalDefeatedMonsters;
        heroes[i+1] -= additionalDefeatedMonsters;
    }
    
    cout << totalMonsters << endl;
    
    return 0;
}