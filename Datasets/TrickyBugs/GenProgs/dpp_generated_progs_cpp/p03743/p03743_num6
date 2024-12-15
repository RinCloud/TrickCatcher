#include <iostream>
#include <vector>
#include <algorithm>
using namespace std;

int main() {
    int N, D;
    cin >> N >> D;

    vector<int> d(N);
    for (int i = 0; i < N; i++) {
        cin >> d[i];
    }

    vector<pair<int, int>> plans(Q);
    for (int i = 0; i < Q; i++) {
        cin >> plans[i].first;
        plans[i].second = i;
    }

    sort(plans.begin(), plans.end());

    vector<bool> feasible(Q, true);
    int curr = D;
    for (int i = 0; i < N; i++) {
        if (plans.empty()) break;

        if (curr < plans.back().first) {
            feasible[plans.back().second] = false;
            plans.pop_back();
        }

        curr = min(curr, abs(curr - d[i]));
    }

    for (int i = 0; i < Q; i++) {
        cout << (feasible[i] ? "YES" : "NO") << endl;
    }

    return 0;
}