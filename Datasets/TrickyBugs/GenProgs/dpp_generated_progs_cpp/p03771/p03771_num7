#include <iostream>
#include <vector>
#include <cmath>
#include <algorithm>

using namespace std;

int main() {
    int N, V;
    cin >> N >> V;

    vector<int> x(N);
    for (int i = 0; i < N; i++) {
        cin >> x[i];
    }

    // Check if it is possible to visit all oases starting from each oasis
    vector<string> possible(N);

    // Check from left to right
    int maxWater = V;
    for (int i = 0; i < N; i++) {
        if (x[i] - x[i-1] > maxWater) {
            possible[i] = "Impossible";
        } else {
            maxWater = max(maxWater - (x[i] - x[i-1]), V);
            possible[i] = "Possible";
        }
    }

    // Check from right to left
    maxWater = V;
    for (int i = N-1; i >= 0; i--) {
        if (x[i+1] - x[i] > maxWater) {
            possible[i] = "Impossible";
        } else {
            maxWater = max(maxWater - (x[i+1] - x[i]), V);
            possible[i] = "Possible";
        }
    }

    // Print the results
    for (int i = 0; i < N; i++) {
        cout << possible[i] << endl;
    }

    return 0;
}