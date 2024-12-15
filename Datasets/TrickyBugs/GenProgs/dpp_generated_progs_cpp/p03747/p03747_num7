#include <iostream>
#include <vector>

using namespace std;

int main() {
    int N, L, T;
    cin >> N >> L >> T;
    
    vector<int> X(N);
    vector<int> W(N);
    vector<int> newPos(N);
    
    for (int i = 0; i < N; i++) {
        cin >> X[i] >> W[i];
        
        // Calculate the new position based on initial direction
        if (W[i] == 1) {
            newPos[i] = (X[i] + T) % L;
        } else {
            newPos[i] = (X[i] - T + L) % L;
        }
    }
    
    // Check for ant collisions and adjust positions accordingly
    for (int i = 0; i < N; i++) {
        for (int j = i + 1; j < N; j++) {
            if ((W[i] == 1 && W[j] == 2) || (W[i] == 2 && W[j] == 1)) {
                int distance = newPos[j] - newPos[i];
                if (distance <= 0) {
                    distance += L;
                }
                if (distance <= T) {
                    newPos[i] = (newPos[i] + distance) % L;
                    newPos[j] = (newPos[j] - distance + L) % L;
                }
            }
        }
    }
    
    // Print the final positions of the ants
    for (int i = 0; i < N; i++) {
        cout << newPos[i] << endl;
    }
    
    return 0;
}