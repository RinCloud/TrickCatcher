#include <iostream>
#include <vector>
#include <cmath>

using namespace std;

int main() {
    int N;
    cin >> N;

    vector<int> spots(N);
    for (int i = 0; i < N; i++) {
        cin >> spots[i];
    }

    vector<int> costs(N);
    int total_cost = 0;

    for (int i = 0; i < N; i++) {
        if (i == 0) {
            costs[i] = abs(0 - spots[i]);
        } else {
            costs[i] = abs(spots[i] - spots[i - 1]);
        }
        total_cost += costs[i];
    }

    for (int i = 0; i < N; i++) {
        cout << total_cost - abs(spots[i] - (i == 0 ? 0 : spots[i - 1])) - abs(spots[i] - (i == N - 1 ? 0 : spots[i + 1])) << endl;
    }

    return 0;
}