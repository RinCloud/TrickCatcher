#include <iostream>
#include <vector>
using namespace std;

int main() {
    int N, L, T;
    cin >> N >> L >> T;

    vector<int> X(N);
    vector<int> W(N);
    for (int i = 0; i < N; i++) {
        cin >> X[i] >> W[i];
    }

    vector<int> finalPosition(N);
    for (int i = 0; i < N; i++) {
        int currentPosition = X[i];
        int currentDirection = W[i];
        int totalDistance = currentDirection * T;

        int numRevolution = totalDistance / L;
        int remainingDistance = totalDistance % L;
        if (numRevolution % 2 == 1) {
            remainingDistance = L - remainingDistance;
        }

        int newPosition = (currentPosition + remainingDistance) % L;
        finalPosition[i] = newPosition;
    }

    for (int i = 0; i < N; i++) {
        cout << finalPosition[i] << endl;
    }

    return 0;
}