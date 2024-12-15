#include <iostream>
#include <vector>
#include <queue>
using namespace std;

const int MOD = 1000000007;

vector<int> solve(int N, vector<vector<int>>& adjList) {
    vector<int> ans(N+1, 0);
    vector<int> dp(N+1, 0);
    vector<bool> visited(N+1, false);

    queue<int> q;
    q.push(1);
    dp[1] = 1;
    ans[1] = 1;

    while(!q.empty()) {
        int u = q.front();
        q.pop();
        visited[u] = true;

        for(int v : adjList[u]) {
            if(!visited[v]) {
                dp[v] = (dp[u] + dp[v]) % MOD;
                ans[v] = (ans[u] + dp[v]) % MOD;
                q.push(v);
            }
        }
    }

    return ans;
}

int main() {
    int N;
    cin >> N;

    vector<vector<int>> adjList(N+1);
    for(int i=0; i<N-1; i++) {
        int a, b;
        cin >> a >> b;
        adjList[a].push_back(b);
        adjList[b].push_back(a);
    }

    vector<int> result = solve(N, adjList);

    for(int i=1; i<=N; i++) {
        cout << result[i] << endl;
    }

    return 0;
}