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
        if (a.first == b.first) {
            return a.second < b.second;
        } else {
            return a.first > b.first;
        }
    });

    int K = 0;
    for (int i = 0; i < N; i++) {
        K += segments[i].first;
        segments[i].second -= segments[i].first;
    }

    sort(segments.begin(), segments.end(), [](const pair<int, int>& a, const pair<int, int>& b) {
        return a.second < b.second;
    });

    for (int i = 0; i < N; i++) {
        K += segments[i].second;
    }

    cout << K << endl;

    return 0;
}