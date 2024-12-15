#include <iostream>
#include <vector>
#include <algorithm>

using namespace std;

int main() {
    int N;
    cin >> N;

    vector<int> sticks(N);
    for (int i = 0; i < N; i++) {
        cin >> sticks[i];
    }

    sort(sticks.rbegin(), sticks.rend());

    // Initialize maximum area to 0
    int maxArea = 0;

    // Try all possible combinations of 4 different sticks
    for (int i = 0; i < N - 3; i++) {
        for (int j = i + 1; j < N - 2; j++) {
            for (int k = j + 1; k < N - 1; k++) {
                for (int l = k + 1; l < N; l++) {
                    // Check if the sticks form a rectangle
                    if (sticks[i] == sticks[j] && sticks[k] == sticks[l]) {
                        // Calculate the area of the rectangle
                        int area = sticks[i] * sticks[k];
                        // Update the maximum area if necessary
                        maxArea = max(maxArea, area);
                    }
                }
            }
        }
    }

    cout << maxArea << endl;

    return 0;
}