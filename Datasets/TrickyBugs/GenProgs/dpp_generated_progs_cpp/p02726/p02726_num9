#include <iostream>
#include <vector>
#include <queue>

using namespace std;

// Function to find the shortest distance between two vertices in a graph
int shortestDistance(vector<vector<int>>& graph, int start, int end) {
    vector<int> distance(graph.size(), -1);
    queue<int> q;
    
    distance[start] = 0;
    q.push(start);
    
    while (!q.empty()) {
        int curr = q.front();
        q.pop();
        
        for (int next : graph[curr]) {
            if (distance[next] == -1) {
                distance[next] = distance[curr] + 1;
                q.push(next);
                
                if (next == end) {
                    return distance[next];
                }
            }
        }
    }
    
    return -1;
}

// Function to find the number of pairs with a given shortest distance
int numberOfPairs(int N, int X, int Y, int k) {
    vector<vector<int>> graph(N+1);
    
    // Add edges between vertices
    for (int i = 1; i <= N-1; i++) {
        graph[i].push_back(i+1);
        graph[i+1].push_back(i);
    }
    
    // Add edge between X and Y
    graph[X].push_back(Y);
    graph[Y].push_back(X);
    
    int count = 0;
    
    // Find the number of pairs with shortest distance k
    for (int i = 1; i <= N; i++) {
        for (int j = i+1; j <= N; j++) {
            if (shortestDistance(graph, i, j) == k) {
                count++;
            }
        }
    }
    
    return count;
}

int main() {
    int N, X, Y;
    cin >> N >> X >> Y;
    
    // Calculate and print the number of pairs for each k
    for (int k = 1; k <= N-1; k++) {
        int pairs = numberOfPairs(N, X, Y, k);
        cout << pairs << endl;
    }
    
    return 0;
}