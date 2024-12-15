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

    // Sort the sticks in descending order
    sort(sticks.rbegin(), sticks.rend());

    // Find the maximum possible area of the rectangle
    int area = 0;
    for (int i = 0; i < N - 3; i++) {
        // Check if the current stick can form a rectangle
        if (sticks[i] == sticks[i + 1]) {
            // Calculate the area using the current stick and the next three different sticks
            int current_area = sticks[i] * sticks[i + 2];
            if (current_area > area) {
                area = current_area;
            }
        }
    }

    cout << area << endl;

    return 0;
}