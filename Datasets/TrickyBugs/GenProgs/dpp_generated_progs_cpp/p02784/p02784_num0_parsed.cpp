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
    
    // Initialize a set to store the remaining health after each move
    unordered_set<int> remaining_health;
    remaining_health.insert(H);
    
    // Iterate through each move
    for (int i = 0; i < N; i++) {
        unordered_set<int> new_health;
        
        // Iterate through the remaining health after each move
        for (int health : remaining_health) {
            // If the move can take the health to or below 0, Raccoon wins
            if (moves[i] >= health) {
                cout << "Yes" << endl;
                return 0;
            }
            
            // Calculate the new health after using the current move
            int new_health_val = health - moves[i];
            
            // If the new health is not already included, add it to the set
            if (remaining_health.find(new_health_val) == remaining_health.end()) {
                new_health.insert(new_health_val);
            }
        }
        
        // Update the remaining health set with the newly calculated health values
        for (int health : new_health) {
            remaining_health.insert(health);
        }
    }
    
    cout << "No" << endl;
    
    return 0;
}