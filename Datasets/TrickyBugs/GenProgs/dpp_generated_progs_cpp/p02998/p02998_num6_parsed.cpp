#include <iostream>
#include <vector>
#include <unordered_map>

using namespace std;

int main() {
    // Read input
    int N;
    cin >> N;
    
    vector<pair<int, int>> dots(N);
    unordered_map<int, unordered_map<int, int>> count;
    for (int i = 0; i < N; i++) {
        cin >> dots[i].first >> dots[i].second;
        count[dots[i].first][dots[i].second]++;
    }
    
    // Count the number of valid squares
    int numSquares = 0;
    for (int i = 0; i < N; i++) {
        int x1 = dots[i].first;
        int y1 = dots[i].second;
        for (int j = i + 1; j < N; j++) {
            int x2 = dots[j].first;
            int y2 = dots[j].second;
            
            if (x1 == x2 || y1 == y2) {
                continue;  // Points are on the same line, cannot form square
            }
            
            if (count[x1][y2] && count[x2][y1]) {
                numSquares++;
            }
        }
    }
    
    // Output the maximum number of operations
    cout << numSquares / 2 << endl;
    
    return 0;
}