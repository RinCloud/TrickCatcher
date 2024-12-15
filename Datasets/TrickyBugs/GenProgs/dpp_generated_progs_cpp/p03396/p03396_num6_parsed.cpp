#include <iostream>
#include <algorithm>
#include <vector>

using namespace std;

int main() {
    int N, L;
    cin >> N >> L;
    vector<int> shoppingCentres(N);
    vector<int> shoppingTimes(N);
    for (int i = 0; i < N; i++) {
        cin >> shoppingCentres[i];
    }
    for (int i = 0; i < N; i++) {
        cin >> shoppingTimes[i];
    }

    long long totalTime = 0;
    int currentPosition = 0;
    int direction = 1; // 1 for positive direction, -1 for negative direction

    for (int i = 0; i < N; i++) {
        int nextPosition = shoppingCentres[i];
        int travelTime = nextPosition - currentPosition;

        if (direction == -1) {
            travelTime = (L - nextPosition) + currentPosition;
        }

        totalTime += travelTime;
        totalTime += shoppingTimes[i];

        currentPosition = nextPosition;
        direction *= -1;
    }

    totalTime += (L - currentPosition);
    cout << totalTime << endl;

    return 0;
}