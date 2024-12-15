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
    
    sort(begin(chairs), end(chairs));
    
    int maxRight = -1;
    int additionalChairs = 0;
    
    for (int i = 0; i < N; i++) {
        int L = chairs[i].first;
        int R = chairs[i].second;
        
        if (L <= maxRight) {
            maxRight = max(maxRight, R);
        } else {
            additionalChairs += (L - maxRight - 1);
            maxRight = R;
        }
    }
    
    additionalChairs += (M - maxRight);
    
    cout << additionalChairs << endl;
    
    return 0;
}