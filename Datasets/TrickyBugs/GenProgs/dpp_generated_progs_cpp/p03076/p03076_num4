#include <iostream>
#include <vector>
#include <algorithm>

using namespace std;

int main() {
    // Read the input
    int A, B, C, D, E;
    cin >> A >> B >> C >> D >> E;

    // Create an array of dish serving times
    vector<int> servingTimes = {A, B, C, D, E};

    // Sort the serving times in descending order
    sort(servingTimes.begin(), servingTimes.end(), greater<int>());

    // Calculate the earliest possible time for the last dish to be delivered
    int totalTime = 0;
    for (int i = 0; i < 5; i++) {
        // Add the serving time of the current dish
        totalTime += servingTimes[i];

        // Check if it is a multiple of 10
        if (totalTime % 10 != 0) {
            // If not, round up to the next multiple of 10
            totalTime = (totalTime / 10 + 1) * 10;
        }
    }

    // Print the result
    cout << totalTime << endl;

    return 0;
}