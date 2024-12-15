#include <iostream>
#include <vector>
#include <algorithm>

using namespace std;

int main() {
    int N, M;
    cin >> N >> M;
    
    vector<pair<int, int>> ranges(N);
    
    for (int i = 0; i < N; i++) {
        cin >> ranges[i].first >> ranges[i].second;
    }
    
    sort(ranges.begin(), ranges.end());
    
    int maxRight = 0;
    int numAdditionalChairs = 0;
    
    for (int i = 0; i < N; i++) {
        if (maxRight < ranges[i].first) {
            numAdditionalChairs += ranges[i].first - maxRight;
            maxRight = ranges[i].first;
        }
        
        maxRight = max(maxRight, ranges[i].second);
    }
    
    numAdditionalChairs += M + 1 - maxRight;
    
    cout << numAdditionalChairs << endl;
    
    return 0;
}