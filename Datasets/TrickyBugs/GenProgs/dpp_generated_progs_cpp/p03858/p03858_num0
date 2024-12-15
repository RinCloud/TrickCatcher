#include <iostream>
#include <vector>
#include <algorithm>
using namespace std;

int main() {
    int N, a, b;
    cin >> N >> a >> b;
    
    vector<pair<int, int>> pinholes(N);
    for (int i = 0; i < N; i++) {
        cin >> pinholes[i].first >> pinholes[i].second;
    }
    
    int count = 0;
    pair<int, int> compass1 = pinholes[a-1];
    pair<int, int> compass2 = pinholes[b-1];
    
    for (int i = 0; i < N; i++) {
        if (i == a-1 || i == b-1) {
            continue;
        }
        
        int d1 = abs(compass1.first - pinholes[i].first) + abs(compass1.second - pinholes[i].second);
        int d2 = abs(compass2.first - pinholes[i].first) + abs(compass2.second - pinholes[i].second);
        
        if (d1 == d2) {
            count++;
        }
    }
    
    cout << count << endl;
    
    return 0;
}