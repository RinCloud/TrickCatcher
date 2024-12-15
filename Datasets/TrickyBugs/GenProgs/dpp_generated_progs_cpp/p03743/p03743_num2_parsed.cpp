#include <iostream>
#include <vector>
#include <algorithm>

using namespace std;

int main() {
    // Read input values
    int N, D;
    cin >> N >> D;
    vector<int> d(N);
    for (int i = 0; i < N; i++) {
        cin >> d[i];
    }
    int Q;
    cin >> Q;
    vector<int> q(Q);
    for (int i = 0; i < Q; i++) {
        cin >> q[i];
    }

    // Calculate the maximum distance that can be travelled
    vector<int> max_distance(N);
    max_distance[N - 1] = d[N - 1];
    for (int i = N - 2; i >= 0; i--) {
        max_distance[i] = max(max_distance[i + 1], d[i]);
    }

    // Check feasibility of each plan
    vector<string> feasibility(Q);
    for (int i = 0; i < Q; i++) {
        if (d[q[i] - 1] <= D - max_distance[q[i] - 1]) {
            feasibility[i] = "NO";
        } else {
            feasibility[i] = "YES";
        }
    }

    // Print feasibility of each plan
    for (int i = 0; i < Q; i++) {
        cout << feasibility[i] << endl;
    }

    return 0;
}