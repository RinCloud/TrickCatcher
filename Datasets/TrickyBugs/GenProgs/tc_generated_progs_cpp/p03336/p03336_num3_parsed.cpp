#include<bits/stdc++.h>
#define rep(i,a,b) for(int i=(a);i<=(b);i++)
#define per(i,a,b) for(int i=(a);i>=(b);i--)
#define REP(i,n) for(int i=0;i<(n);i++)
#define fi first
#define se second
#define pb push_back
#define mp make_pair
using namespace std;
typedef pair<int,int> pii;
typedef vector<int> vi;
typedef long long ll;

template<class T> inline void read(T &x){
    int f=0;x=0;char ch=getchar();
    for(;!isdigit(ch);ch=getchar())f|=(ch=='-');
    for(;isdigit(ch);ch=getchar())x=x*10+ch-'0';
    if(f)x=-x;
}

const int N=2000005;
int ra[N],rb[N],a[N],b[N],p[N],n,m,K,cnt;
set<int> s1,s2;
char s[N];

int main(){
    read(n),read(m),read(K);
    scanf("%s",s+1);
    rep(i,1,n) a[i]=s[n+1-i]-'0';
    scanf("%s",s+1);
    rep(i,1,m) b[i]=s[m+1-i]-'0';
    per(i,max(n,m),1){
        if(a[i]&&b[i]) p[++cnt]=i;
        else if(a[i]) s1.insert(i);
        else if(b[i]) s2.insert(i);
    }
    rep(i,1,cnt){
        int x=p[i],y=0;
        while(x&&y<K){
            auto it1=s1.lower_bound(x);
            auto it2=s2.lower_bound(x);
            int d1=(it1!=s1.end()?*it1-x-1:N);
            int d2=(it2!=s2.end()?*it2-x-1:N);
            int d=min(K-y,min(d1,d2));
            x+=d,y+=d;
            if(y==K) break;
            if(d1<d2){
                assert(*it1==x+1);
                int l=x+1,r=l; auto t=it1;
                while(t!=s1.end()&&*t==r) s1.erase(t++),r++;
                if(it2!=s2.end()&&*it2==r){
                    x=r,s2.erase(it2);
                }
                else x=0,s1.insert(r);
                s2.insert(l);
            }
            else{
                assert(*it2==x+1);
                int l=x+1,r=l; auto t=it2;
                while(t!=s2.end()&&*t==r) s2.erase(t++),r++;
                if(it1!=s1.end()&&*it1==r){
                    x=r,s1.erase(it1);
                }
                else x=0,s2.insert(r);
                s1.insert(l);
            }
            y++;
        }
        if(x) ra[x]=rb[x]=1;
    }
    for(auto x:s1) ra[x]=1;
    for(auto x:s2) rb[x]=1;
    int la=N,lb=N;
    while(!ra[la]) la--;
    while(!rb[lb]) lb--;
    per(i,la,1) putchar('0'+ra[i]);
    puts("");
    per(i,lb,1) putchar('0'+rb[i]);
    puts("");
    return 0;
}
