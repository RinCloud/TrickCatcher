#include <iostream>
#include <vector>
#include <algorithm>

using namespace std;

int main() {
    int N, V;
    cin >> N >> V;
    
    vector<int> x(N);
    for (int i = 0; i < N; i++) {
        cin >> x[i];
    }
    
    vector<bool> possible(N, false);
    possible[0] = (x[0] - V <= 0);
    for (int i = 1; i < N; i++) {
        if (x[i] - x[i-1] <= V) {
            possible[i] = possible[i-1];
        }
        else {
            possible[i] = (x[i] - V <= x[i-1] + V);
        }
    }
    
    reverse(x.begin(), x.end());
    reverse(possible.begin(), possible.end());
    
    int last_pos = x[0];
    for (int i = 1; i < N; i++) {
        if (x[i] - last_pos > V) {
            possible[i] = false;
        }
        
        last_pos = x[i];
    }
    
    reverse(possible.begin(), possible.end());
    
    for (bool p : possible) {
        if (p) cout << "Possible" << endl;
        else cout << "Impossible" << endl;
    }
    
    return 0;
}