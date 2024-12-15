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
        int dist_a = abs(x[i] - 0);
        int dist_b = abs(x[i] - K);
        total_distance += min(dist_a, dist_b);
    }

    cout << total_distance * 2 << endl;

    return 0;
}