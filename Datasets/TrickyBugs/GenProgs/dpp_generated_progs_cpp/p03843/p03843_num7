#include <iostream>
#include <vector>
#include <queue>

using namespace std;

int main() {
    int N;
    cin >> N;
    
    // Create an adjacency list to represent the tree
    vector<vector<int>> adjList(N + 1);
    for (int i = 1; i <= N - 1; i++) {
        int a, b;
        cin >> a >> b;
        adjList[a].push_back(b);
        adjList[b].push_back(a);
    }
    
    string s;
    cin >> s;
    
    // Count the number of vertices liked by Snuke
    int numLikedVertices = 0;
    for (char c : s) {
        if (c == '1') {
            numLikedVertices++;
        }
    }
    
    // Perform a Breadth-First Search (BFS) starting from a liked vertex
    int startVertex = -1;
    for (int i = 0; i < N; i++) {
        if (s[i] == '1') {
            startVertex = i + 1;
            break;
        }
    }
    
    vector<bool> visited(N + 1, false);
    queue<int> bfsQueue;
    bfsQueue.push(startVertex);
    visited[startVertex] = true;
    
    while (!bfsQueue.empty()) {
        int currVertex = bfsQueue.front();
        bfsQueue.pop();
        
        for (int neighbor : adjList[currVertex]) {
            if (!visited[neighbor]) {
                bfsQueue.push(neighbor);
                visited[neighbor] = true;
            }
        }
    }
    
    // Count the number of black and white vertices after the operation
    int numBlackVertices = numLikedVertices;
    int numWhiteVertices = N - numLikedVertices;
    
    for (int i = 1; i <= N; i++) {
        if (!visited[i]) {
            if (s[i - 1] == '1') {
                numBlackVertices++;
            } else {
                numWhiteVertices++;
            }
        }
    }
    
    // Calculate the number of possible combinations of colors
    long long numCombinations = 0;
    for (int d = 0; d <= N; d++) {
        long long blackComb = 1, whiteComb = 1;
        
        for (int i = 1; i <= numBlackVertices; i++) {
            blackComb *= i;
            blackComb %= 1000000007;
        }
        
        for (int i = 1; i <= numWhiteVertices; i++) {
            whiteComb *= i;
            whiteComb %= 1000000007;
        }
        
        long long currComb = 1;
        for (int i = 1; i <= d; i++) {
            currComb *= i;
            currComb %= 1000000007;
        }
        
        numCombinations += (blackComb * whiteComb % 1000000007) * currComb % 1000000007;
        numCombinations %= 1000000007;
    }
    
    cout << numCombinations << endl;
    
    return 0;
}