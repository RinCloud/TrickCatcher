#include <iostream>
#include <vector>
#include <algorithm>

using namespace std;

int main() {
    int N, M;
    cin >> N >> M;
    
    vector<pair<int, int>> chairs;
    for (int i = 0; i < N; i++) {
        int L, R;
        cin >> L >> R;
        chairs.push_back(make_pair(L, R));
    }

    // Sort chairs by their right coordinate in ascending order
    sort(chairs.begin(), chairs.end(), [](const pair<int, int>& a, const pair<int, int>& b) {
        return a.second < b.second;
    });

    int minAdditionalChairs = 0;
    int curRight = 0;
    for (int i = 0; i < N; i++) {
        int left = chairs[i].first;
        int right = chairs[i].second;
        
        // If the chair's left coordinate is greater than the current right coordinate,
        // we need to place an additional chair between them
        if (left > curRight) {
            minAdditionalChairs += (left - curRight);
            curRight = left;
        }
        
        curRight = max(curRight, right);
    }
    
    // If the rightmost chair is not at coordinate M, we need to place additional chairs
    if (curRight < M) {
        minAdditionalChairs += (M - curRight);
    }
    
    cout << minAdditionalChairs << endl;

    return 0;
}