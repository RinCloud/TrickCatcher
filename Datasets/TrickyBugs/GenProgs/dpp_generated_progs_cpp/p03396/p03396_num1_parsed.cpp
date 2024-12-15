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

    int totalTime = 0;
    int currentPos = 0;
    int currentIndex = 0;
    int direction = 1;

    while (currentIndex < N) {
        int nextPos = shoppingCentres[currentIndex];
        int travelTime = abs(nextPos - currentPos);
        totalTime += travelTime;

        if (totalTime % (2 * L) < L) {
            totalTime += (L - (totalTime % (2 * L)));
        } else {
            totalTime += (2 * L - (totalTime % (2 * L)));
        }

        totalTime += shoppingTimes[currentIndex];
        currentPos = nextPos;
        currentIndex++;
    }

    totalTime += (L - currentPos);
    cout << totalTime << endl;

    return 0;
}