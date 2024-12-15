#include <iostream>
#include <vector>
#include <algorithm>
using namespace std;

int main() {
    int N, L;
    cin >> N >> L;

    vector<int> shoppingCentres(N);
    for (int i = 0; i < N; i++) {
        cin >> shoppingCentres[i];
    }

    vector<int> shoppingTimes(N);
    for (int i = 0; i < N; i++) {
        cin >> shoppingTimes[i];
    }

    // Calculate the total time to finish shopping
    int totalTime = 0;

    // Calculate the time to reach the first shopping centre
    totalTime += shoppingCentres[0];

    // Calculate the time to finish shopping at each shopping centre
    for (int i = 0; i < N; i++) {
        totalTime += shoppingTimes[i];
    }

    // Calculate the time to return home
    totalTime += L - shoppingCentres[N - 1];

    // Calculate the additional time due to train movement
    int maxAdditionalTime = 0;
    for (int i = 0; i < N - 1; i++) {
        maxAdditionalTime = max(maxAdditionalTime, shoppingCentres[i + 1] - shoppingCentres[i] - shoppingTimes[i]);
    }
    totalTime += maxAdditionalTime;

    // Print the minimum time required to finish shopping
    cout << totalTime << endl;

    return 0;
}