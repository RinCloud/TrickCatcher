#include<cstdio>
#include<cstring>
#include<queue>
#include<algorithm>
using namespace std;
const int MAXN=805,fx[4][2]={{0,1},{0,-1},{1,0},{-1,0}};
int H,W,K;
int map[MAXN][MAXN],st[2];
bool vis[MAXN][MAXN];
struct node
{
    int x,y,t;
    node(){}
    node(int xx,int yy,int tt)
    {
        x=xx,y=yy,t=tt;
    }
};
queue<node>q;
int main()
{
    //freopen("room.in","r",stdin);
    //freopen("room.out","w",stdout);
    scanf("%d %d %d",&H,&W,&K);
    for(int i=1;i<=H;i++)
    {
        for(int j=1;j<=W;j++)
        {
            char c;
            scanf(" %c",&c);
            if(c=='.')
                map[i][j]=0;
            if(c=='#')
                map[i][j]=1;
            if(c=='S')
            {
                st[0]=i;
                st[1]=j;
            }
        }
    }
    if(st[0]==1||st[1]==1||st[0]==H||st[1]==W)
    {
        printf("0\n");
        return 0;
    }
    q.push(node(st[0],st[1],K));
    vis[st[0]][st[1]]=1;
    int ans=H*W;
    while(!q.empty())
    {
        node k=q.front();
        q.pop();
        int Mi=min(min(k.x-1,H-k.x),min(k.y-1,W-k.y));
        ans=min(1+(Mi+K-1)/K,ans);
        if(k.t==0)
            continue;
        for(int o=0;o<4;o++)
        {
            int xx=k.x+fx[o][0];
            int yy=k.y+fx[o][1];
            if(1<=xx&&xx<=H&&1<=yy&&yy<=W&&map[xx][yy]==0&&vis[xx][yy]==0)
            {
                vis[xx][yy]=1;
                q.push(node(xx,yy,k.t-1));
            }
        }
    }
    printf("%d\n",ans);
}
