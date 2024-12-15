#include <iostream>
#include <vector>

using namespace std;

int main() {
    int N, M;
    cin >> N >> M;
    
    vector<vector<int>> graph(N+1, vector<int>(0));
    
    for (int i = 0; i < M; i++) {
        int X, Y, Z;
        cin >> X >> Y >> Z;
        
        graph[X].push_back(Y);
        graph[Y].push_back(X);
    }
    
    vector<bool> visited(N+1, false);
    int cost = 0;
    
    for (int i = 1; i <= N; i++) {
        if (!visited[i]) {
            int evenCount = 0;
            int oddCount = 0;
            
            vector<int> queue(0);
            queue.push_back(i);
            visited[i] = true;
            
            while (!queue.empty()) {
                int node = queue.back();
                queue.pop_back();
                
                if (node % 2 == 0) {
                    evenCount++;
                } else {
                    oddCount++;
                }
                
                for (int j = 0; j < graph[node].size(); j++) {
                    int neighbor = graph[node][j];
                    if (!visited[neighbor]) {
                        visited[neighbor] = true;
                        queue.push_back(neighbor);
                    }
                }
            }
            
            cost += min(evenCount, oddCount);
        }
    }
    
    cout << cost << endl;
    
    return 0;
}