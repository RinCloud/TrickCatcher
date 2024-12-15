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

    int total_distance = 0;
    for (int i = 0; i < N; i++) {
        total_distance += min(2 * x[i], 2 * (K - x[i]));
    }

    cout << total_distance << endl;

    return 0;
}