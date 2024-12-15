#include <iostream>
#include <vector>
#include <algorithm>
using namespace std;

int main() {
    int N, a, b;
    cin >> N >> a >> b;
    
    vector<pair<int, int>> pinholes(N);
    for (auto& p : pinholes) {
        cin >> p.first >> p.second;
    }
    
    vector<int> distances;
    for (int i = 0; i < N; i++) {
        for (int j = i + 1; j < N; j++) {
            int d = abs(pinholes[i].first - pinholes[j].first) + abs(pinholes[i].second - pinholes[j].second);
            distances.push_back(d);
        }
    }
    
    sort(distances.begin(), distances.end());
    distances.erase(unique(distances.begin(), distances.end()), distances.end());
    
    int count = 0;
    for (int i = 0; i < distances.size(); i++) {
        if (distances[i] == abs(pinholes[a - 1].first - pinholes[b - 1].first) + abs(pinholes[a - 1].second - pinholes[b - 1].second)) {
            count++;
        }
    }
    
    cout << count << endl;
    
    return 0;
}