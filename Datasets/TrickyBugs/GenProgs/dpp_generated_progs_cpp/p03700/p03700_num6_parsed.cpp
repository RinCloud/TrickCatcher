#include <iostream>
#include <cmath>

using namespace std;

int main() {
    int N, A, B;
    cin >> N >> A >> B;
    
    // Read health values of monsters
    long long total_explosions = 0;
    for (int i = 0; i < N; i++) {
        long long health;
        cin >> health;
        
        // Calculate the number of explosions needed to vanish the current monster
        if (health > 0) {
            health -= A;
            total_explosions++;
            if (health > 0) {
                total_explosions += ceil((double) health / B);
            }
        }
    }
    
    cout << total_explosions << endl;
    
    return 0;
}