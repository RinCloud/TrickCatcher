#include <iostream>
#include <vector>
#include <algorithm>

using namespace std;

int main() {
    int N, M;
    cin >> N >> M;

    vector<pair<int, int>> chairs(N);
    for (int i = 0; i < N; i++) {
        cin >> chairs[i].first >> chairs[i].second;
    }

    sort(chairs.begin(), chairs.end(), [](const pair<int, int>& a, const pair<int, int>& b) {
        return a.first < b.first;
    });

    int additionalChairs = 0;
    int maxRight = -1;
    for (int i = 0; i < N; i++) {
        if (chairs[i].first > maxRight) {
            additionalChairs += chairs[i].first - maxRight - 1;
            maxRight = chairs[i].first;
        }
        maxRight = max(maxRight, chairs[i].second);
    }

    additionalChairs += M - maxRight;

    cout << additionalChairs << endl;

    return 0;
}