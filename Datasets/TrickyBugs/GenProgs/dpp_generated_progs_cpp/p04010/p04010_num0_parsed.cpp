#include <bits/stdc++.h>
using namespace std;

vector<int> adjList[100005];
bool visited[100005]={false};
int colors[100005];
int blackCount=0, whiteCount=0, edges=0;

void dfs(int node){
    visited[node]=true;
    colors[node]=1-colors[node];
    if(colors[node]) blackCount++;
    else whiteCount++;
    
    for(int i=0;i<adjList[node].size();i++){
        int child = adjList[node][i];
        if(!visited[child]){
            edges++;
            dfs(child);
        }
    }
}

int main(){
    int n,m;
    cin>>n>>m;

    for(int i=0;i<m;i++){
        int a,b;
        cin>>a>>b;
        adjList[a].push_back(b);
        adjList[b].push_back(a);
    }

    int connectedComponents=0;
    bool impossible=false;

    for(int i=1;i<=n;i++){
        if(!visited[i]){
            blackCount=0, whiteCount=0, edges=0;
            edges=0;
            dfs(i);
            connectedComponents++;
            if(blackCount==0 || whiteCount==0) impossible=true; // checks if atleast one vertex of both colors is present in each connected component
        }
    }

    if(impossible){
        cout<<-1<<endl;
    }else{
        cout<<edges<<endl;
    }

    return 0;
}