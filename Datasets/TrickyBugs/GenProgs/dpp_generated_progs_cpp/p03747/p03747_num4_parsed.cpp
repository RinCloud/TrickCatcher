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

    vector<int> newPosition(N);
    for (int i = 0; i < N; i++) {
        int newPosition = X[i] + (W[i] == 1 ? T : -T);
        newPosition[i] %= L;
        if (newPosition[i] < 0) {
            newPosition[i] += L;
        }
    }

    for (int i = 0; i < N; i++) {
        cout << newPosition[i] << endl;
    }

    return 0;
}