#include <iostream>
#include <vector>
#include <set>
using namespace std;

int main() {
    int N, M;
    cin >> N >> M;
    
    // Create adjacency list for island connections
    vector<set<int>> graph(N+1);
    for (int i = 0; i < M; i++) {
        int a, b;
        cin >> a >> b;
        graph[a].insert(b);
        graph[b].insert(a);
    }
    
    // Check if there is a possible path from Island 1 to Island N using two boat services
    for (int i : graph[1]) {
        if (graph[i].count(N)) {
            cout << "POSSIBLE" << endl;
            return 0;
        }
    }
    
    cout << "IMPOSSIBLE" << endl;
    return 0;
}