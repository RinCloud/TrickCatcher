#include <iostream>
#include <vector>
#include <queue>
#include <algorithm>
#include <cmath>
using namespace std;

typedef long long ll;
typedef pair<int,int> pii;
typedef pair<ll,int> pli;

struct Edge{
    int to;
    ll cost;
    Edge(int to,ll cost):to(to),cost(cost){}
};

const ll INF=1e17;

vector<ll> dijkstra(int n, vector<vector<Edge> > &G, int s){
    priority_queue<pli,vector<pli>,greater<pli> > que;
    vector<ll> d(n+1,INF);

    que.push(pli(0,s));
    d[s]=0;

    while(!que.empty()){
        pli p=que.top();
        que.pop();
        int v=p.second;
        if(d[v]<p.first) continue;
        for(int i=0;i<G[v].size();i++){
            Edge e=G[v][i];
            if(d[e.to]>d[v]+e.cost){
                d[e.to]=d[v]+e.cost;
                que.push(pli(d[e.to],e.to));
            }
        }
    }
    return d;
}

int main(){
    int N,M;
    cin>>N>>M;
    vector<vector<Edge> > G(N+1);
    for(int i=0;i<M;i++){
        int L,R,D;
        cin>>L>>R>>D;
        G[L].push_back(Edge(R,D));
        G[R].push_back(Edge(L,-D));
    }
    vector<ll> d=dijkstra(N,G,1);
    for(int i=1;i<=N;i++){
        if(d[i]==INF){
            cout<<"No"<<endl;
            return 0;
        }
    }
    cout<<"Yes"<<endl;
    return 0;
}