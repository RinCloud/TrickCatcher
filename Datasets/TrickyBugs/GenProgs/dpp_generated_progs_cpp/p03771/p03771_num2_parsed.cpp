#include <iostream>
#include <vector>
#include <algorithm>
#include <cmath>
using namespace std;

bool isPossible(int start, int N, int V, vector<int>& x) {
    int cur_water = V;
    int cur_pos = start;
    for (int i = start; i < N-1; ++i) {
        // Walk to the next oasis
        int dist = x[i+1] - x[i];
        if (dist > cur_water) {
            return false;
        }
        cur_water -= dist;
        cur_pos = i+1;
        // Jump to any point on the line
        if (2*cur_pos < N && cur_water > 0) {
            cur_water /= 2;
            cur_pos *= 2;
        }
    }
    // Check if all oases are visited
    return (cur_pos == N-1);
}

int main() {
    int N, V;
    cin >> N >> V;
    vector<int> x(N);
    for (int i = 0; i < N; ++i) {
        cin >> x[i];
    }
    for (int i = 0; i < N; ++i) {
        if (isPossible(i, N, V, x)) {
            cout << "Possible" << endl;
        } else {
            cout << "Impossible" << endl;
        }
    }
    return 0;
}