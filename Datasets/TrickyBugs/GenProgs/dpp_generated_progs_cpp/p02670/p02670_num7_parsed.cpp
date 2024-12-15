#include <iostream>
#include <vector>
#include <cmath>

using namespace std;

int main() {
    int N;
    cin >> N;
    
    vector<int> P(N * N);
    for (int i = 0; i < N * N; i++) {
        cin >> P[i];
    }
    
    vector<vector<int>> seats(N, vector<int>(N));
    int countPairs = 0;
    
    for (int i = 0; i < N * N; i++) {
        int row = (P[i] - 1) / N;
        int col = (P[i] - 1) % N;
        
        // Count the number of viewers that hate the current viewer
        int numHate = 0;
        
        // Check left seat if it exists
        if (col > 0 && seats[row][col - 1] != 0 && seats[row][col - 1] < P[i]) {
            numHate++;
        }
        
        // Check right seat if it exists
        if (col < N - 1 && seats[row][col + 1] != 0 && seats[row][col + 1] < P[i]) {
            numHate++;
        }
        
        // Check upper seat if it exists
        if (row > 0 && seats[row - 1][col] != 0 && seats[row - 1][col] < P[i]) {
            numHate++;
        }
        
        // Check lower seat if it exists
        if (row < N - 1 && seats[row + 1][col] != 0 && seats[row + 1][col] < P[i]) {
            numHate++;
        }
        
        countPairs += numHate;
        seats[row][col] = P[i];
    }
    
    cout << countPairs << endl;
    
    return 0;
}