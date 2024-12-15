#include <iostream>
#include <vector>
#include <algorithm>
using namespace std;

int main() {
    int N, E, T;
    cin >> N >> E >> T;
    vector<int> x(N);
    for (int i = 0; i < N; i++) {
        cin >> x[i];
    }
    
    int totalTime = 0;
    int currentTime = 0;
    int currentPosition = 0;
    for (int i = 0; i < N; i++) {
        if (x[i] - currentPosition <= T) {
            currentTime += x[i] - currentPosition;
            currentPosition = x[i];
        } else {
            int numCandy = (x[i] - currentPosition - 1) / T;
            currentTime += numCandy * T;
            currentPosition += numCandy * T;
            currentTime += (x[i] - currentPosition);
            currentPosition = x[i];
        }
        currentTime += T; // Time taken to give candy and pick up coin
    }
    
    currentTime += (E - currentPosition); // Time taken to reach exit
    totalTime = currentTime;
    cout << totalTime << endl;
    
    return 0;
}