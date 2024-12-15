#include <bits/stdc++.h>
#define pb push_back
#define cmin(a,b) (a>b?a=b:a)
#define cmax(a,b) (a<b?a=b:a)
#define lop(i,s,t) for(int i=s;i<(t);++i)
#define rep(i,s,t) for(int i=s;i<=(t);++i)
#define dec(i,s,t) for(int i=s;i>=(t);--i)
#define fore(i,v) for(int i=g[v],d=es[i].d;i;i=es[i].nxt,d=es[i].d)
using namespace std;

#define Pr(f,...) //fprintf(stderr,f,##__VA_ARGS__),fflush(stderr)

typedef long long ll;

const int N=21;

char str[1<<N];
int ans,len,n,req,f[N][1<<N],g[N][1<<N];

inline int mask(int x){ return (1<<x)-1; }

int main(int argc,char *argv[]){
#ifdef CURIOUSCAT
    freopen("dat.in","r",stdin);
    freopen("my.out","w",stdout);
#endif
    scanf("%d%d",&n,&req);    
    rep(i,0,n){
        scanf("%s",str); 
        lop(s,0,(1<<i)){
            f[i][s]=str[s]-'0';
        }
    }
    g[0][0]=-1;
    rep(i,1,n){
        lop(s,0,(1<<i)){
            int b=s>>(i-1)&1,p=i;
            for(;p>=1&&(s>>(p-1)&1)==b;--p);
            g[i][s]=p;
        }   
    }
    rep(i,0,n){
        for(int j=1;i+j<=n;++j){
            int all=(1<<(i+j))-1;
            lop(s,0,all){
                f[i][s>>j]+=f[i+j][s];
                int p=g[j][s&mask(j)];
                if(p>=0)f[i+p][((s>>j)<<p)+(s&mask(p))]+=f[i+j][s];
            }
        }
        dec(s,(1<<i)-1,0){
            if(f[i][s]>=req){
                len=i;
                ans=s;
                break;
            }
        }
        if (ans != -1) { 
            break;
        }
    }
    dec(i,len-1,0)putchar((ans>>i&1)+'0'); 
    puts(""); 
    return 0;
}
