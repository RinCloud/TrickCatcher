#include <iostream>
#include <vector>
#include <algorithm>

using namespace std;

vector<int> adj[101];
int leafCount[101];

void dfs(int node, int parent)
{
    if(adj[node].size() == 1)
        leafCount[node] = 1;
    
    for(int child : adj[node])
    {
        if(child == parent)
            continue;
        
        dfs(child, node);
        
        if(leafCount[child]%2 == 0)
            leafCount[node] += leafCount[child];
    }
    
    leafCount[node] = max(1, leafCount[node]);
}

int main()
{
    int N;
    cin >> N;
    
    for(int i=0; i<N-1; i++)
    {
        int a, b;
        cin >> a >> b;
        adj[a].push_back(b);
        adj[b].push_back(a);
    }
    
    dfs(1, -1);
    
    int minColorfulness = *min_element(leafCount+1, leafCount+N+1);
    int minLeaves = count(leafCount+1, leafCount+N+1, minColorfulness);
    
    cout << minColorfulness << " " << minLeaves << endl;
    
    return 0;
}