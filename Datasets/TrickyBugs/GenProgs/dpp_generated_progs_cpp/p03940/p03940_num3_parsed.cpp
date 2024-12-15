#include <iostream>
#include <vector>
#include <algorithm>
#include <cmath>

using namespace std;

int main() {
    // Read input
    int N, E, T;
    cin >> N >> E >> T;
    
    vector<int> x(N);
    for (int i = 0; i < N; i++) {
        cin >> x[i];
    }
    
    // Calculate the minimum time needed
    int minTime = 0;
    
    for (int i = 0; i < N; i++) {
        // Calculate the time taken to reach the bear and give it a candy
        minTime += x[i] * 2;
        
        // If this is not the last bear, calculate the time taken to collect the coin from this bear and move to the next bear
        if (i != N - 1) {
            minTime += T;
        }
    }
    
    // Calculate the time taken to move to the exit
    minTime += (E - x[N-1]);
    
    // Output the result
    cout << minTime << endl;
    
    return 0;
}