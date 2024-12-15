#include <iostream>
#include <vector>
#include <cmath>
#include <algorithm>

using namespace std;

int main() {
    int N, a, b;
    cin >> N >> a >> b;
    
    vector<pair<int, int>> pinholes(N);
    for (int i = 0; i < N; i++) {
        int x, y;
        cin >> x >> y;
        pinholes[i] = make_pair(x, y);
    }
    
    int count = 0;
    for (int i = 0; i < N; i++) {
        int x1 = pinholes[i].first;
        int y1 = pinholes[i].second;
        
        vector<int> distances;
        for (int j = 0; j < N; j++) {
            int x2 = pinholes[j].first;
            int y2 = pinholes[j].second;
            
            int distance = abs(x1 - x2) + abs(y1 - y2);
            distances.push_back(distance);
        }
        
        sort(distances.begin(), distances.end());
        
        int index = lower_bound(distances.begin(), distances.end(), distances[b - 1]) - distances.begin();
        if (index + 1 != b && index + 1 != a) {
            count++;
        }
    }
    
    cout << count << endl;
    
    return 0;
}