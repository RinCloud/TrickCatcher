#include <iostream>
#include <vector>
#include <algorithm>

using namespace std;

int main() {
    int N, E, T;
    cin >> N >> E >> T;

    vector<int> bears(N);
    for (int i = 0; i < N; i++) {
        cin >> bears[i];
    }

    // Find the maximum time taken to reach the exit
    int maxTime = max(E - bears[N-1], bears[0]);

    // Calculate the minimum time to pick up all the coins and go to the exit
    int minTime = 0;
    for (int i = 1; i < N; i++) {
        int distance = bears[i] - bears[i-1];
        if (distance <= 2 * T) {
            minTime += distance;
        } else {
            minTime += 2 * T;
        }
    }
    minTime += bears[N-1] + T;

    // Output the answer
    cout << minTime + maxTime << endl;

    return 0;
}