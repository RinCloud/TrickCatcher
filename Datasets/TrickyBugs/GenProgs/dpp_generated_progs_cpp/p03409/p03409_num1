#include <iostream>
#include <vector>
#include <algorithm>

using namespace std;

int main() {
    int N;
    cin >> N;
    
    vector<pair<int, int>> redPoints(N);
    vector<pair<int, int>> bluePoints(N);

    for (int i = 0; i < N; i++) {
        cin >> redPoints[i].first >> redPoints[i].second;
    }

    for (int i = 0; i < N; i++) {
        cin >> bluePoints[i].first >> bluePoints[i].second;
    }

    sort(redPoints.begin(), redPoints.end());
    sort(bluePoints.begin(), bluePoints.end());

    int ans = 0;
    for (int i = 0; i < N; i++) {
        for (int j = 0; j < N; j++) {
            if (redPoints[i].first < bluePoints[j].first && redPoints[i].second < bluePoints[j].second) {
                ans++;
                break;
            }
        }
    }

    cout << ans << endl;

    return 0;
}