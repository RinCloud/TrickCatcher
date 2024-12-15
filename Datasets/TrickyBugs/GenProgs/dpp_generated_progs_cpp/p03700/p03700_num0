#include <iostream>
#include <vector>
#include <algorithm>

using namespace std;

int main() {
    // Read the inputs
    int N, A, B;
    cin >> N >> A >> B;

    vector<int> health(N);
    for (int i = 0; i < N; i++) {
        cin >> health[i];
    }

    // Sort the health values in non-descending order
    sort(health.begin(), health.end());

    // Initialize the count of explosions to 0
    int explosions = 0;

    // Loop through the health values backwards
    for (int i = N - 1; i >= 0; i--) {
        // Calculate the remaining health after one explosion centered at this monster
        int remainingHealth = health[i] - A;

        // If the remaining health is non-positive, this monster will vanish
        if (remainingHealth <= 0) {
            // Increase the count of explosions
            explosions++;
        } else {
            // Find the number of explosions needed to make the remaining health non-positive
            int remainingExplosions = (remainingHealth + A - B - 1) / (A - B);

            // Increase the count of explosions by the number needed for this monster
            explosions += remainingExplosions;

            // Update the health values of the remaining monsters
            for (int j = 0; j < i; j++) {
                health[j] -= remainingExplosions * B;
            }
        }
    }

    // Print the minimum number of explosions needed to vanish all monsters
    cout << explosions << endl;

    return 0;
}