#include <iostream>
#include <vector>
#include <unordered_set>

using namespace std;

int main() {
    int H, N;
    cin >> H >> N;
    
    vector<int> A(N);
    for (int i = 0; i < N; i++) {
        cin >> A[i];
    }
    
    unordered_set<int> health;
    health.insert(H);
    
    for (int i = 0; i < N; i++) {
        unordered_set<int> newHealth;
        
        for (int h : health) {
            for (int j = 0; j <= h; j += A[i]) {
                newHealth.insert(h - j);
            }
        }
        
        health = newHealth;
    }
    
    if (health.count(0) > 0) {
        cout << "Yes" << endl;
    } else {
        cout << "No" << endl;
    }
    
    return 0;
}