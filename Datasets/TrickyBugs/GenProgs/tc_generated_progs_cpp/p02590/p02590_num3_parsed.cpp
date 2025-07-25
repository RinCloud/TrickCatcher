#pragma GCC optimize(2)
#pragma GCC optimize(3,"Ofast","inline")
#include <bits/stdc++.h>

#define ALL(x) (x).begin(),(x).end()
#define ll long long
#define db double
#define ull unsigned long long
#define pii_ pair<int,int>
#define mp_ make_pair
#define pb push_back
#define fi first
#define se second
#define rep(i,a,b) for(int i=(a);i<=(b);i++)
#define per(i,a,b) for(int i=(a);i>=(b);i--)
#define show1(a) cout<<#a<<" = "<<a<<endl
#define show2(a,b) cout<<#a<<" = "<<a<<"; "<<#b<<" = "<<b<<endl
using namespace std;
const ll INF = 1LL<<60;
const int inf = 1<<30;
const int maxn = 2e5+5;
const int M = 200003;
const double pi = acos(-1.0);
inline void fastio() {ios::sync_with_stdio(false);cin.tie(0);cout.tie(0);}

int pos[maxn],a[maxn],cnt[maxn];
ll G[maxn];
int r[maxn<<2];
void init()
{
    int g = 2;
    G[0] = 1;
    pos[1] = 0;
    rep(i,1,M-1){
        G[i] = (G[i-1] * g) % M;
        pos[G[i]] = i;
    }
}
struct cpx
{
    double x,y;
    cpx(double xx=0,double yy=0) {x=xx,y=yy;}
    cpx operator + (cpx b) {return cpx(x+b.x,y+b.y);}
    cpx operator - (cpx b) {return cpx(x-b.x,y-b.y);}
    cpx operator * (cpx b) {return cpx(x*b.x-y*b.y,x*b.y+y*b.x);}
}A[maxn<<2],B[maxn<<2];
void FFT(cpx *a,int lim,int type)
{
    rep(i,0,lim) if(i&r[i]) swap(a[i],a[r[i]]);
    for(int mid=1;mid<lim;mid<<=1){
        cpx wn(cos(pi/mid),type*sin(pi/mid));
        for(int R=mid<<1,j=0;j<lim;j+=R){
            cpx w(1,0);
            for(int k=0;k<mid;k++,w=w*wn){
                cpx x = a[j+k],y = w*a[j+k+mid];
                a[j+k] = x+y;
                a[j+k+mid] = x-y;
            }
        }
    }
    if(type==-1){
        rep(i,0,lim) a[i].x /= lim;
    }
}

int main()
{
    fastio(); init();
    int n; cin>>n;
    rep(i,1,n) {
        cin>>a[i];
        if(a[i]>0) cnt[pos[a[i]]]++;
    }
    rep(i,0,M-1){
        A[i].x = B[i].x = cnt[i];
    }
    int lim = 1,l = 0;
    while(lim<=2*M) lim<<=1,l++;
    rep(i,1,lim-1) r[i] = (r[i>>1]>>1) | ((i&1)<<(l-1));
    FFT(A,lim,1);FFT(B,lim,1);
    rep(i,0,lim-1) A[i] = A[i]*B[i];
    FFT(A,lim,-1);

    ll ans = 0;
    rep(i,0,lim-1){
        ans += llround(A[i].x) * G[i%(M-1)];
    }
    rep(i,0,M-1) ans -= 1LL * cnt[i] * (G[i] * G[i] % M);
    cout<<ans/2<<'\n';
    return 0;
}
