#include <iostream>
#include <algorithm>
using namespace std;

int main() {
    int N, T;
    cin >> N >> T;
    
    int minCost = 1001;
    bool found = false;
    
    for (int i = 0; i < N; i++) {
        int cost, time;
        cin >> cost >> time;
        
        if (time <= T) {
            minCost = min(minCost, cost);
            found = true;
        }
    }
    
    if (found) {
        cout << minCost << endl;
    } else {
        cout << "TLE" << endl;
    }
    
    return 0;
}