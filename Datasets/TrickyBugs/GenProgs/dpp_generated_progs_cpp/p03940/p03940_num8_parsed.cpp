#include <iostream>
#include <vector>

using namespace std;

int main() {
    int N, E, T;
    cin >> N >> E >> T;

    vector<int> x(N);
    for (int i = 0; i < N; i++) {
        cin >> x[i];
    }

    int totalTime = 0;
    int remainingCoins = N;
    int currentPosition = 0;

    for (int i = 0; i < N; i++) {
        int distance = abs(x[i] - currentPosition);
        totalTime += distance;

        if (totalTime % T == 0) {
            remainingCoins--;
        }
        currentPosition = x[i];
    }

    totalTime += abs(E - currentPosition);

    if (totalTime % T == 0) {
        remainingCoins--;
    }

    totalTime += remainingCoins * T;

    cout << totalTime << endl;

    return 0;
}