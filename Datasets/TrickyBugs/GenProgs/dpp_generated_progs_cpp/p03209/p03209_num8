#include <iostream>
#include <cmath>

using namespace std;

// Function to calculate the number of patties in the bottom-most X layers
long long calculatePatties(int N, long long X) {
    // Base case
    if (N == 0) {
        return 1;
    }

    // Calculate the total number of layers in level-N burger
    long long totalLayers = pow(2, N + 1) - 3;

    // If X is equal to or greater than the total number of layers,
    // all layers will be patties
    if (X >= totalLayers) {
        return pow(2, N) - 1;
    }

    // Calculate the number of layers in the level-(N-1) burger
    long long prevLayers = pow(2, N) - 1;

    // If X is less than or equal to the number of layers in the level-(N-1) burger,
    // recursive call for level-(N-1) burger
    if (X <= prevLayers) {
        return calculatePatties(N - 1, X - 1);
    }

    // If X is equal to the number of layers in the level-(N-1) burger plus one,
    // one patty will be eaten and the remaining layers will be patties
    if (X == prevLayers + 1) {
        return calculatePatties(N - 1, prevLayers - 1) + 1;
    }

    // If X is greater than the number of layers in the level-(N-1) burger plus one,
    // recursive call for level-(N-1) burger and the remaining layers
    return calculatePatties(N - 1, prevLayers - 1) + 1 + calculatePatties(N - 1, X - prevLayers - 2);
}

int main() {
    // Read input values
    int N;
    long long X;
    cin >> N >> X;

    // Calculate and print the number of patties
    long long patties = calculatePatties(N, X);
    cout << patties << endl;

    return 0;
}