#include <iostream>
#include <vector>
#include <algorithm>

using namespace std;

int main() {
    int N, K;
    cin >> N >> K;

    vector<int> x(N);
    for (int i = 0; i < N; i++) {
        cin >> x[i];
    }

    int totalDistance = 0;
    for (int i = 0; i < N; i++) {
        int a = x[i];
        int b = K - x[i];
        totalDistance += min(a, b) * 2;
    }

    cout << totalDistance << endl;

    return 0;
}