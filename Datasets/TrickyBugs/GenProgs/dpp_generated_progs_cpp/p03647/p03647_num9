#include <iostream>
#include <vector>
#include <unordered_set>

using namespace std;

int main() {
    int N, M;
    cin >> N >> M;
    
    vector<pair<int, int>> services;
    unordered_set<int> destinations;
    
    for (int i = 0; i < M; i++) {
        int a, b;
        cin >> a >> b;
        services.push_back({a, b});
        
        if (a == 1) {
            destinations.insert(b);
        }
    }
    
    for (int i = 0; i < M; i++) {
        int a = services[i].first;
        int b = services[i].second;
        
        if (b == N && destinations.count(a)) {
            cout << "POSSIBLE" << endl;
            return 0;
        }
    }
    
    cout << "IMPOSSIBLE" << endl;
    
    return 0;
}