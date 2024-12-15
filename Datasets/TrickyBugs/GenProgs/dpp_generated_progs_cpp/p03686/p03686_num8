#include <iostream>
#include <vector>
#include <algorithm>

using namespace std;

int main() {
    int N, M;
    cin >> N >> M;
    
    vector<pair<int, int>> chairs; // pair of (L_i, R_i)
    for (int i = 0; i < N; i++) {
        int L, R;
        cin >> L >> R;
        chairs.push_back({L, R});
    }
    
    sort(chairs.begin(), chairs.end());
    
    int ans = 0;
    int maxR = 0; // maximum R coordinate among the selected chairs
    
    for (int i = 0; i < N; i++) {
        if (chairs[i].second <= maxR) {
            // this person can sit on a chair within the existing range
            continue;
        } else if (chairs[i].first <= maxR) {
            // narrow the range by updating maxR
            maxR = chairs[i].second;
        } else {
            // additional chair is required
            ans += chairs[i].first - maxR;
            maxR = chairs[i].second;
        }
    }
    
    cout << ans << endl;
    
    return 0;
}