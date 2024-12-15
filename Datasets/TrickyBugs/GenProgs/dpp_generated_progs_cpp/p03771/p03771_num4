#include <iostream>
#include <vector>
#include <algorithm>
#include <cmath>
using namespace std;

int main() {
    int N, V;
    cin >> N >> V;
    vector<int> oases(N);
    for (int i = 0; i < N; i++) {
        cin >> oases[i];
    }

    // Check if it is possible to visit all oases starting from each oasis
    for (int i = 0; i < N; i++) {
        bool possible = true;
        int water = V;
        int pos = i;
        
        // Check if it is possible to reach the next oasis from the current one
        for (int j = i+1; j < N; j++) {
            int distance = oases[j] - oases[j-1];
            
            // Check if walking is possible with the available water
            if (distance > water) {
                possible = false;
                break;
            }
            
            // Reduce the available water by the amount used for walking
            water -= distance;
            
            // Update the position to the current oasis
            pos = j;
            
            // Reduce the amount of water stored to half after jumping
            water = floor(water / 2);
        }
        
        // Check if it is possible to return to the starting oasis
        for (int j = pos-1; j >= i; j--) {
            int distance = oases[j] - oases[j+1];
            
            // Check if walking is possible with the available water
            if (distance > water) {
                possible = false;
                break;
            }
            
            // Reduce the available water by the amount used for walking
            water -= distance;
            
            // Reduce the amount of water stored to half after jumping
            water = floor(water / 2);
        }
        
        // Print the result for the current oasis
        if (possible) {
            cout << "Possible" << endl;
        } else {
            cout << "Impossible" << endl;
        }
    }

    return 0;
}