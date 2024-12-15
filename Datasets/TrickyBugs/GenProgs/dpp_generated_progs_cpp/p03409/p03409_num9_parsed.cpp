#include <iostream>
#include <vector>
#include <algorithm>
using namespace std;

bool compare(pair<int, int> a, pair<int, int> b) {
    if (a.first == b.first) {
        return a.second < b.second;
    }
    return a.first < b.first;
}

int main() {
    int N;
    cin >> N;
    
    vector<pair<int, int>> redPoints;
    vector<pair<int, int>> bluePoints;

    for (int i = 0; i < N; i++) {
        int a, b;
        cin >> a >> b;
        redPoints.push_back(make_pair(a, b));
    }

    for (int i = 0; i < N; i++) {
        int c, d;
        cin >> c >> d;
        bluePoints.push_back(make_pair(c, d));
    }
    
    sort(redPoints.begin(), redPoints.end(), compare);
    sort(bluePoints.begin(), bluePoints.end(), compare);

    int friendlyPairs = 0;
    int redIndex = 0;
    int blueIndex = 0;

    while (redIndex < N && blueIndex < N) {
        if (redPoints[redIndex].first < bluePoints[blueIndex].first && redPoints[redIndex].second < bluePoints[blueIndex].second) {
            friendlyPairs++;
            redIndex++;
        }
        blueIndex++;
    }

    cout << friendlyPairs << endl;

    return 0;
}