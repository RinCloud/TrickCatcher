#include <iostream>
#include <vector>
#include <algorithm>

using namespace std;

int main() {
    int N;
    cin >> N;

    vector<pair<int, int>> segments(N);
    for (int i = 0; i < N; i++) {
        cin >> segments[i].first >> segments[i].second;
    }

    sort(segments.begin(), segments.end(), [](const pair<int, int>& a, const pair<int, int>& b) {
        return a.first + a.second > b.first + b.second;
    });

    int K = 0;
    for (int i = 0; i < N; i++) {
        if (i % 2 == 0) {
            K += segments[i].first;
        } else {
            K += segments[i].second;
        }
    }

    cout << K << endl;

    return 0;
}