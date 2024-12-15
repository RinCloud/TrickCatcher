#include <iostream>
#include <vector>
using namespace std;

int main() {
    int N;
    cin >> N;
    vector<int> bricks(N);
    for (int i = 0; i < N; i++) {
        cin >> bricks[i];
    }

    vector<bool> used(N, false);  // Track which bricks have been used
    int remaining = N;  // Number of bricks remaining after breaking

    // Traverse the bricks from left to right
    for (int i = 0; i < N; i++) {
        int current = bricks[i];  // Current brick's value
        
        // If the current brick value is greater than the remaining bricks,
        // it is not possible to satisfy Snuke's desire
        if (current > remaining) {
            cout << -1 << endl;
            return 0;
        }
        
        // If the current brick value is already used or it is not equal to i,
        // mark it as used and decrease the count of remaining bricks
        if (current == i + 1 || used[current - 1]) {
            used[current - 1] = true;
            remaining--;
        }
    }

    cout << N - remaining << endl;

    return 0;
}