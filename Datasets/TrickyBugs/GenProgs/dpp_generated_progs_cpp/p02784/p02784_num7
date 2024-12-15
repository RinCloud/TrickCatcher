#include <iostream>
#include <vector>
#include <unordered_set>
using namespace std;

int main() {
    int H, N;
    cin >> H >> N;
    
    vector<int> moves(N);
    for (int i = 0; i < N; i++) {
        cin >> moves[i];
    }
    
    unordered_set<int> healths;
    healths.insert(H);
    for (int i = 0; i < N; i++) {
        unordered_set<int> newHealths;
        
        for (int health : healths) {
            if (health <= 0) {
                continue;
            }
            
            int newHealth = health - moves[i];
            if (newHealth <= 0) {
                cout << "Yes" << endl;
                return 0;
            }
            
            if (healths.count(newHealth) == 0) {
                newHealths.insert(newHealth);
            }
        }
        
        healths.insert(newHealths.begin(), newHealths.end());
    }
    
    cout << "No" << endl;
    
    return 0;
}