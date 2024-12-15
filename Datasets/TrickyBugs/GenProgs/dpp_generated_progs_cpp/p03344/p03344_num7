#include<iostream>
#include<vector>
using namespace std;

const int MAXN = 1e5 + 5;
vector<int> adj[MAXN];
int A[MAXN], B[MAXN];
bool visited[MAXN];

void dfs(int v, int& min_money) {
    visited[v] = true;
    min_money = min(min_money, A[v]);
    for(int u : adj[v]){
        if(!visited[u]) {
            dfs(u, min_money);
        }
    }
}

int main() {
    int N, M;
    cin >> N >> M;
    for(int i=1; i<=N; i++){
        cin >> A[i] >> B[i];
    }
    for(int i=1; i<=M; i++){
        int U, V;
        cin >> U >> V;
        adj[U].push_back(V);
        adj[V].push_back(U);
    }
    
    int min_money = A[1];
    dfs(1, min_money);
    
    int sum_money = 0;
    for(int i=1; i<=N; i++){
        sum_money += B[i];
    }
    int W = max(sum_money - min_money, 0);
    cout << W << endl;
    
    return 0;
}