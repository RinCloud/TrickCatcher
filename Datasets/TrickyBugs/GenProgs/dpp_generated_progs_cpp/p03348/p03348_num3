#include <iostream>
#include <vector>
#include <algorithm>
#include <queue>

using namespace std;

int findColorfulness(vector<vector<int>>& adjList, vector<int>& color)
{
    int N = adjList.size();
    int colorfulness = 0;
    vector<int> visited(N, false);
    
    for (int i = 0; i < N; i++) {
        if (visited[i]) {
            continue;
        }
        
        int colorCount = 0;
        queue<int> q;
        q.push(i);
        visited[i] = true;
        
        while (!q.empty()) {
            int node = q.front();
            q.pop();
            
            colorCount = max(colorCount, color[node]);
            
            for (int neighbor : adjList[node]) {
                if (!visited[neighbor]) {
                    q.push(neighbor);
                    visited[neighbor] = true;
                }
            }
        }
        
        colorfulness += colorCount + 1;
    }
    
    return colorfulness;
}

int main()
{
    int N;
    cin >> N;
    
    vector<int> a(N - 1);
    vector<int> b(N - 1);
    vector<vector<int>> adjList(N);
    
    for (int i = 0; i < N - 1; i++) {
        cin >> a[i] >> b[i];
        a[i]--; // zero-based indexing
        b[i]--; // zero-based indexing
        adjList[a[i]].push_back(b[i]);
        adjList[b[i]].push_back(a[i]);
    }
    
    vector<int> color(N, 0);
    
    for (int i = 0; i < N - 1; i++) {
        color[b[i]] = max(color[b[i]], color[a[i]] + 1);
    }
    
    int colorfulness = findColorfulness(adjList, color);
    int leafCount = count(color.begin(), color.end(), 0);
    
    cout << colorfulness << " " << leafCount << endl;
    
    return 0;
}