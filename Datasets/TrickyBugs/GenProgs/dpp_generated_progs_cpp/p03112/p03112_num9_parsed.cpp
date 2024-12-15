#include <iostream>
#include <vector>
#include <algorithm>
#include <climits>

using namespace std;

int main() {
    int A, B, Q;
    cin >> A >> B >> Q;

    // Read the positions of shrines from the west
    vector<long long> shrines(A);
    for (int i = 0; i < A; i++) {
        cin >> shrines[i];
    }

    // Read the positions of temples from the west
    vector<long long> temples(B);
    for (int i = 0; i < B; i++) {
        cin >> temples[i];
    }

    // Process the queries
    for (int i = 0; i < Q; i++) {
        long long x;
        cin >> x;

        // Find the nearest shrine to the left of x
        auto leftShrine = lower_bound(shrines.begin(), shrines.end(), x) - shrines.begin();

        // Find the nearest shrine to the right of x
        auto rightShrine = upper_bound(shrines.begin(), shrines.end(), x) - shrines.begin();

        // Find the nearest temple to the left of x
        auto leftTemple = lower_bound(temples.begin(), temples.end(), x) - temples.begin();

        // Find the nearest temple to the right of x
        auto rightTemple = upper_bound(temples.begin(), temples.end(), x) - temples.begin();

        // Initialize the minimum distance
        long long minDistance = LLONG_MAX;

        // Check all possible combinations of shrines and temples
        // that can be visited from the left and the right
        for (int j = leftShrine; j <= rightShrine; j++) {
            for (int k = leftTemple; k <= rightTemple; k++) {
                long long distance = abs(shrines[j] - x) + abs(shrines[j] - temples[k]);
                minDistance = min(minDistance, distance);
            }
        }

        // Print the minimum distance
        cout << minDistance << endl;
    }

    return 0;
}