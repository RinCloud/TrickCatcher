#include <iostream>
#include <vector>
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
    
    int totalMonstersDefeated = 0;
    for (int i = 0; i < N; i++) {
        int monstersDefeated = min(monsters[i], heroes[i]);
        totalMonstersDefeated += monstersDefeated;
        
        monsters[i] -= monstersDefeated;
        monsters[i+1] -= min(monsters[i+1], heroes[i] - monstersDefeated);
    }
    
    cout << totalMonstersDefeated << endl;
    
    return 0;
}