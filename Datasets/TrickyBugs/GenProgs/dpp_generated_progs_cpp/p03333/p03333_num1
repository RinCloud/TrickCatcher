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
    sort(segments.begin(), segments.end()); // Sort the segments by left coordinate

    long long ans = 0;
    for (int i = 0; i < N; i++) {
        ans += segments[i].second - segments[i].first; // Add the distance of the current segment to the answer
    }
    cout << ans << endl;

    return 0;
}