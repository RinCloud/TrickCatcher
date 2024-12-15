#include<bits/stdc++.h>
using namespace std;
const int Max=1e5;
int N,M,Q,Num=0,num=0,lin[Max+10]={},Col[Max+10]={},v[Max+10]={},d[Max+10]={},c[Max+10]={},q[Max+10]={};
vector<int> vis[Max+10];
struct kk{
    int Id,Next;
} e[Max*2+10]={};
inline void insert(int x,int y){
    e[++Num].Next=lin[x]; lin[x]=Num; e[Num].Id=y;
}
inline void dfs(int x,int Dep,int col){
    if(!Col[x]) Col[x]=col;
    if(Dep<=0) return;
    if(vis[x][Dep]) return; // do not process a vertex at the same depth again
    vis[x][Dep]=1; // mark vertex x at depth Dep as visited
    for(int i=lin[x];i;i=e[i].Next)
        dfs(e[i].Id,Dep-1,col);
}
int main(){
    scanf("%d%d",&N,&M);
    for(int i=1;i<=M;i++){
        int x,y; scanf("%d%d",&x,&y);
        insert(x,y); insert(y,x);
    }  
    scanf("%d",&Q);
    for(int i=1;i<=Q;i++) scanf("%d%d%d",&v[i],&d[i],&c[i]);
    for(int i=Q;i>=1;--i) {
        vis[v[i]].resize(d[i]+1, 0); // resize vis[v[i]] so that it can hold values upto depth d[i]
        dfs(v[i],d[i],c[i]);
    }
    for(int i=1;i<=N;i++) printf("%d\n",Col[i]);
    return 0;
}
