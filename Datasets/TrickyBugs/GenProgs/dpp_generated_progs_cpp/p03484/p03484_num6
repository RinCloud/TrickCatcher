#include <iostream>
#include <vector>
#include <queue>

using namespace std;

vector<vector<int>> adj;
vector<int> component;

void bfs(int start,int num)
{
    queue<int> q;
    q.push(start);
    component[start] = num;
    while(!q.empty())
    {
        int u = q.front();
        q.pop();
        for(int v : adj[u])
        {
            if(component[v] == -1)
            {
                component[v] = num;
                q.push(v);
            }
        }
    }
}

pair<int, int> findSmallestAB(int n)
{
    adj.resize(n + 1);
    component.assign(n + 1, -1);
    
    for(int i = 1; i < n; i++)
    {
        int a, b;
        cin >> a >> b;
        adj[a].push_back(b);
        adj[b].push_back(a);
    }
    
    int components = 0;
    for(int i = 1; i <= n; i++)
    {
        if(component[i] == -1)
        {
            bfs(i, ++components);
        }
    }

    int a = components - 1;
    int b = 0;
    for(int i = 1; i <= n; i++)
    {
        for(int v : adj[i])
        {
            if(component[i] != component[v])
            {
                b = max(b, min(component[i], component[v]));
            }
        }
    }
    
    return make_pair(a, b);
}

int main()
{
    int n;
    cin >> n;

    pair<int, int> result = findSmallestAB(n);
    cout << result.first << " " << result.second << endl;

    return 0;
}