#include <iostream>
#include <algorithm>

using namespace std;

int main() {
    // Read input
    int Q, H, S, D, N;
    cin >> Q >> H >> S >> D >> N;

    // Calculate the costs of different bottles
    int quarterCost = min(Q * 4, min(H * 2, min(S, D / 2)));
    int halfCost = min(H * 2, min(S, D / 2));
    int fullCost = min(S, D);

    // Calculate the total cost based on the required liters
    long long totalCost = 0;
    if (N % 2 == 0) {
        totalCost = min(fullCost * (N / 2), halfCost * (N / 2));
    } else {
        totalCost = min(quarterCost + halfCost * ((N - 1) / 2), fullCost * (N / 2));
    }

    // Print the result
    cout << totalCost << endl;

    return 0;
}