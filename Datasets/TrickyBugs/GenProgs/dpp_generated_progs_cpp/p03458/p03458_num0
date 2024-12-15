#include <iostream>
#include <vector>
#include <unordered_map>
using namespace std;

int main() {
    int N, K;
    cin >> N >> K;

    unordered_map<int, unordered_map<int, char>> grid;

    // read desires and update grid
    for (int i = 0; i < N; i++) {
        int x, y;
        char c;
        cin >> x >> y >> c;
        grid[x % (2 * K)][y % (2 * K)] = c;
    }

    // count number of desires that can be satisfied
    int count = 0;
    for (int x = 0; x < 2 * K; x++) {
        for (int y = 0; y < 2 * K; y++) {
            char c = grid[x % K][y % K];
            if (c == '\0') { // empty square
                continue;
            } else if (c == grid[(x + K) % (2 * K)][y % K] ||
                c == grid[x % K][(y + K) % (2 * K)]) { // same color in adjacent square
                count++;
            }
        }
    }

    cout << count << endl;

    return 0;
}