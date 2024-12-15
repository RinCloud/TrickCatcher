#include <iostream>
#include <vector>
#include <queue>
#include <climits>

using namespace std;

#define INF LLONG_MAX

typedef pair<long long, int> P;

vector<vector<pair<int, int>>> graph;
vector<vector<long long>> dp;
vector<long long> silver;
vector<long long> gold;
int n, m, s;

void dijkstra(int start){
    dp[start][0] = 0;
    priority_queue<P, vector<P>, greater<P>> pq;
    pq.push(make_pair(0, start));
    
    while(!pq.empty()){
        P curr = pq.top();
        pq.pop();
        int u = curr.second;
        long long currGold = curr.first / silver[u];
        long long currTime = curr.first;
        
        if(currTime > dp[u][currGold])
            continue;
        
        for(auto next: graph[u]){
            int v = next.first;
            int cost = next.second;
            
            if(currTime + cost < dp[v][currGold]){
                dp[v][currGold] = currTime + cost;
                pq.push(make_pair(dp[v][currGold], v * s + currGold));
            }
        }
        
        if(currGold + 1 < s){
            long long newTime = currTime + gold[u];
            if(newTime < dp[u][currGold + 1]){
                dp[u][currGold + 1] = newTime;
                pq.push(make_pair(dp[u][currGold + 1], u * s + currGold + 1));
            }
        }
    }
}

int main() {
    cin >> n >> m >> s;
    
    graph.resize(n + 1);
    dp.resize(n + 1, vector<long long>(s + 1, INF));
    
    for(int i = 0; i < m; i++){
        int u, v, a, b;
        cin >> u >> v >> a >> b;
        graph[u].push_back(make_pair(v, a));
        graph[v].push_back(make_pair(u, a));
    }
    
    silver.resize(n + 1);
    gold.resize(n + 1);
    
    for(int i = 1; i <= n; i++){
        cin >> silver[i] >> gold[i];
    }
    
    for(int i = 2; i <= n; i++){
        dijkstra(i);
        long long minTime = INF;
        for(int j = 0; j <= s; j++){
            minTime = min(minTime, dp[i][j]);
        }
        cout << minTime << endl;
    }
    
    return 0;
}