#include <iostream>
#include <vector>
#include <algorithm>
using namespace std;

int main() {
    int N, A, B;
    cin >> N >> A >> B;
    vector<int> health(N);
    for (int i = 0; i < N; i++) {
        cin >> health[i];
    }
    
    int explosions = 0;
    for (int i = 0; i < N; i++) {
        int remaining_health = health[i] - A * explosions;
        if (remaining_health <= 0) {
            continue;
        }
        int num_explosions = (remaining_health + B - 1) / B;
        explosions += num_explosions;
    }
    
    cout << explosions << endl;
    
    return 0;
}