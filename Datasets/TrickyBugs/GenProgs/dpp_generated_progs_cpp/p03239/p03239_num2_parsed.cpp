#include <iostream>
#include <limits>
using namespace std;

int main() {
    int N, T;
    cin >> N >> T;
    
    int minCost = numeric_limits<int>::max();
    bool found = false;
    
    for (int i = 0; i < N; i++) {
        int c, t;
        cin >> c >> t;
        
        if (t <= T && c < minCost) {
            minCost = c;
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