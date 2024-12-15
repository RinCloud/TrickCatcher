#include <iostream>
#include <algorithm>
#include <vector>
#include <cmath>

using namespace std;

int main() {
    int N;
    cin >> N;

    vector<int> x(N), y(N);
    for (int i = 0; i < N; i++) {
        cin >> x[i] >> y[i];
    }

    int maxDist = 0;
    for (int i = 0; i < N; i++) {
        for (int j = i+1; j < N; j++) {
            int dist = max(abs(x[i] - x[j]), abs(y[i] - y[j]));
            maxDist = max(maxDist, dist);
        }
    }

    cout << maxDist << endl;

    return 0;
}