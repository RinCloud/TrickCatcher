#include <iostream>
#include <vector>
using namespace std;

int main() {
    int X, K, Q;
    cin >> X;
    cin >> K;
    
    vector<int> r(K);
    for (int i = 0; i < K; i++) {
        cin >> r[i];
    }
    
    cin >> Q;
    
    vector<pair<int, int>> queries(Q);
    for (int i = 0; i < Q; i++) {
        cin >> queries[i].first >> queries[i].second;
    }
    
    int cobA = X;
    int cobB = 0;
    int idx = 0;
    
    for (int i = 0; i < Q; i++) {
        int currentTime = queries[i].first;
        int target = queries[i].second;
        
        while (idx < K && r[idx] <= currentTime) {
            int timeDifference = r[idx] - currentTime;
            
            if ((r[idx] / X) % 2 == 0) {
                cobB += timeDifference;
            } else {
                cobA -= timeDifference;
            }
            
            currentTime = r[idx];
            idx++;
        }
        
        if (target <= cobA) {
            cout << target << endl;
        } else {
            int timeDifference = currentTime - queries[i].first;
            int remainingTime = (target - cobA) % X;
            
            if ((currentTime / X) % 2 == 0) {
                cout << cobB + remainingTime << endl;
            } else {
                cout << cobB - remainingTime << endl;
            }
        }
    }
    
    return 0;
}