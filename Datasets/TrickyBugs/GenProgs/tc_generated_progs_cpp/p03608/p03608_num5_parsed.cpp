#include <bits/stdc++.h>
#define rep(i,n)for(int i=0;i<(n);i++)
using namespace std;

int d[200][200],s[200],n,m,r,M=INT_MAX;
int main() {
    scanf("%d%d%d",&n,&m,&r);
    rep(i,r)scanf("%d",&s[i]),s[i]--;sort(s,s+r);
    rep(i,n)rep(j,n)d[i][j]=1e9; // Initializing distances to a large value instead of 0x3f
    rep(i,m){
        int a,b,c;scanf("%d%d%d",&a,&b,&c);d[--a][--b]=d[b][a]=c;
    }
    rep(k,n)rep(i,n)rep(j,n)d[i][j]=min(d[i][j],d[i][k]+d[k][j]);
    do{
        int c=0;
        rep(i,r-1)c+=d[s[i]][s[i+1]];
        M=min(M,c);
    }while(next_permutation(s,s+r));
    printf("%d",M);
}
