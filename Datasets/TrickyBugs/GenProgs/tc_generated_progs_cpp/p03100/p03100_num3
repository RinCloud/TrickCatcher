#include <iostream>
#include <vector>
#include <queue>
using namespace std;

const int MAX_N = 50005;
const int MAX_M = 2e6+5;

struct edge{
    int x,c,nxt;
};

vector<int> t0,t1,t2;
int dis[MAX_N],val[MAX_N];
int fa[MAX_M];
int gcd(int a,int b){
    while(b^=a^=b^=a%=b);
    return a;
}
void inse(vector<edge>& e,int x,int y,int c){
    edge cur = {y,c,0};
    e[x].push_back(cur);
    cur.x = x;
    e[y].push_back(cur);
}
void bfs(vector<edge>& e,int n, int Mod){
    queue<int> que;
    que.push(1);
    for(int i=1; i<=n; i++){
        val[i]=dis[i]=-1;
    }
    val[1]=dis[1]=0;
    while(!que.empty()){
        int x=que.front();
        que.pop();
        for(int j=0; j<e[x].size(); j++){
            int nx=e[x][j].x;
            if (dis[nx]==-1){
                dis[nx]=dis[x]+1;
                val[nx]=(val[x]*2+e[x][j].c)%Mod;
                que.push(nx);
            }
        }
    }
}
void add(vector<edge>& e,vector<int>& t0,vector<int>& t1,vector<int>& t2,int x,int y,int c,int dis[],int val[],int Mod){
    int d=dis[x]+1-dis[y];
    int v=1ll*(val[x]*2+c+Mod-val[y])*ny[dis[y]]%Mod;
    if (d==0)t0.push_back(v);
    if (d==1)t1.push_back(v);
    if (d==2)t2.push_back(v);
}

int getfather(int x){return fa[x]==x?x:fa[x]=getfather(fa[x]);}
void merge(int x,int y){
    int fx=getfather(x),fy=getfather(y);
    fa[fx]=fy;
}

int main(){
    int n,m,q,Mod;
    cin >> n >> m >> q >> Mod;
    vector<edge> e(MAX_N);
    for(int i=1; i<=m; i++){
        int x,y,c;
        cin >> x >> y >> c;
        inse(e,x,y,c);
    }
    bfs(e,n,Mod);
    for(int x=1; x<=n; x++){
        for(int j=0; j<e[x].size(); j++){
            int y=e[x][j].x;
            add(e,t0,t1,t2,x,y, e[x][j].c, dis, val, d[dis[x]],val[x],Mod);
        }
    }

    int g=Mod;
    for(auto u:t0)g=gcd(g,u);
    for(int i=0; i<Mod; i++){
        fa[i]=i;
    } 
    if (t1.size()>0){
        int v=t1.back();
        int g=Mod;
        for(auto u:t1)g=gcd(g,abs(u-v));
        vector<bool> used(Mod, false);
        for(int x=0; x<Mod; x++){
            if(!used[x]){
                int g0=g;
                for(int st=x;!used[st];st=(st*2+v)%Mod)
                    for(int y=st;!used[y];y=(y+g)%Mod){
                        used[y]=true;
                        merge(x,y);
                    }
            }
        }
    }
    if (t2.size()>0){
        int v=t2.back();
        int g=Mod;
        for(auto u:t2)g=gcd(g,abs(u-v));
        vector<bool> used(Mod, false);
        for(int x=0; x<Mod; x++){
            if(!used[x]){
                int g0=g;
                for(int st=x;!used[st];st=(st*4+v)%Mod)
                    for(int y=st;!used[y];y=(y+g)%Mod){
                        used[y]=true;
                        merge(x,y);
                    }
            }
        }
    }
    for(int i=1; i<=q; i++){
        int x,y,r;
        cin >>x>>y>>r;
        int u=ny[dis[x]]*(r+Mod-val[x])%Mod;
        int v=ny[dis[y]]*(Mod-val[y])%Mod;
        int fu=getfather(u),fv=getfather(v);
        cout<<(fu==fv?"YES":"NO")<<endl;
    }
    return 0;
}