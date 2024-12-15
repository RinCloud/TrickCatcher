#include <iostream>
#include <vector>
#include <algorithm>

using namespace std;

int main() {
    int N;
    cin >> N;
    
    vector<int> monster_health(N);
    for (int i = 0; i < N; i++) {
        cin >> monster_health[i];
    }
    
    int min_health = *min_element(monster_health.begin(), monster_health.end());
    
    while (count(monster_health.begin(), monster_health.end(), min_health) != N) {
        int max_health = *max_element(monster_health.begin(), monster_health.end());
        
        for (int i = 0; i < N; i++) {
            if (monster_health[i] != min_health) {
                monster_health[i] %= max_health;
            }
        }
        
        min_health = *min_element(monster_health.begin(), monster_health.end());
    }
    
    cout << min_health << endl;
    
    return 0;
}