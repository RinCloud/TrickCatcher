#include <iostream>
#include <vector>
#include <algorithm>

using namespace std;

int main() {
    // Read the number of shrines, temples, and queries
    int A, B, Q;
    cin >> A >> B >> Q;

    // Read the positions of shrines
    vector<long long> shrines(A);
    for (int i = 0; i < A; i++) {
        cin >> shrines[i];
    }

    // Read the positions of temples
    vector<long long> temples(B);
    for (int i = 0; i < B; i++) {
        cin >> temples[i];
    }

    // Process each query
    while (Q--) {
        // Read the position to start from
        long long x;
        cin >> x;

        // Find the closest shrine and temple from the starting position
        auto it_s = lower_bound(shrines.begin(), shrines.end(), x);
        auto it_t = lower_bound(temples.begin(), temples.end(), x);

        // Initialize the minimum distance with a large value
        long long min_distance = 1e18;

        // Check all possible combinations of shrines and temples
        for (int i = -1; i <= 1; i++) {
            for (int j = -1; j <= 1; j++) {
                // Get the index of the current shrine and temple
                int s_index = it_s - shrines.begin() + i;
                int t_index = it_t - temples.begin() + j;

                // Check if the indices are in valid range
                if (s_index >= 0 && s_index < A && t_index >= 0 && t_index < B) {
                    // Calculate the distance and update the minimum distance if necessary
                    long long distance = abs(x - shrines[s_index]) + abs(shrines[s_index] - temples[t_index]);
                    min_distance = min(min_distance, distance);
                }
            }
        }

        // Print the minimum distance
        cout << min_distance << endl;
    }

    return 0;
}