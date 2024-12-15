#include <iostream>
#include <vector>
#include <algorithm>

using namespace std;

// Function to find the number of pairs of viewers
int findPairs(int N, const vector<int>& seats) {
    vector<vector<int>> matrix(N, vector<int>(N, 0));
    vector<pair<int, int>> location(N * N + 1);
    vector<int> dx = {-1, 1, 0, 0};
    vector<int> dy = {0, 0, -1, 1};
    int ans = 0;

    // Fill the matrix and location vector
    for (int i = 0; i < N * N; i++) {
        int row = i / N;
        int col = i % N;
        matrix[row][col] = seats[i];
        location[seats[i]] = make_pair(row, col);
    }

    // Calculate the number of pairs of viewers
    for (int i = 1; i < N * N; i++) {
        pair<int, int> curr = location[i];
        pair<int, int> next = location[i + 1];
        int dist = abs(curr.first - next.first) + abs(curr.second - next.second);
        ans += dist;
    }

    return ans;
}

int main() {
    int N;
    cin >> N;
    vector<int> seats(N * N);
    for (int i = 0; i < N * N; i++) {
        cin >> seats[i];
    }
    int ans = findPairs(N, seats);
    cout << ans << endl;
    
    return 0;
}