#include <iostream>
#include <vector>
#include <unordered_set>

using namespace std;

int main() {
    int N, M;
    cin >> N >> M;
    
    vector<vector<int>> graph(N+1);
    unordered_set<int> destinations;
    
    for (int i = 0; i < M; ++i) {
        int a, b;
        cin >> a >> b;
        graph[a].push_back(b);
        graph[b].push_back(a);
        if (b == N) {
            destinations.insert(a);
        }
    }
    
    for (int a : graph[1]) {
        for (int b : graph[a]) {
            if (destinations.count(b)) {
                cout << "POSSIBLE" << endl;
                return 0;
            }
        }
    }
    
    cout << "IMPOSSIBLE" << endl;
    
    return 0;
}