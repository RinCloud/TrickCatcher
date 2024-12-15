#include <bits/stdc++.h>
#define clr(x) memset(x,0,sizeof (x))
#define For(i,a,b) for (int i=(a);i<=(b);i++)
#define Fod(i,b,a) for (int i=(b);i>=(a);i--)
#define fi first
#define se second
#define kill _z_kill
#define pb(x) push_back(x)
#define mp(x,y) make_pair(x,y)
#define outval(x) cerr<<#x" = "<<x<<endl
#define outv(x) cerr<<#x" = "<<x<<"  "
#define outtag(x) cerr<<"--------------"#x"---------------"<<endl
#define outarr(a,L,R) cerr<<#a"["<<L<<".."<<R<<"] = ";\
	For(_x,L,R) cerr<<a[_x]<<" ";cerr<<endl;
#define User_Time ((double)clock()/CLOCKS_PER_SEC)
using namespace std;
typedef long long LL;
typedef unsigned long long ULL;
typedef unsigned uint;
typedef long double LD;
typedef vector <int> vi;
typedef pair <int,int> pii;
LL read(){
	LL x=0,f=0;
	char ch=getchar();
	while (!isdigit(ch))
		f=ch=='-',ch=getchar();
	while (isdigit(ch))
		x=(x<<1)+(x<<3)+(ch^48),ch=getchar();
	return f?-x:x;
}
const int mod=998244353;
int Pow(int x,int y){
	int ans=1;
	for (;y;y>>=1,x=(LL)x*x%mod)
		if (y&1)
			ans=(LL)ans*x%mod;
	return ans;
}
void Add(int &x,int y){
	if ((x+=y)>=mod)
		x-=mod;
}
void Del(int &x,int y){
	if ((x-=y)<0)
		x+=mod;
}
int Add(int x){
	return x>=mod?x-mod:x;
}
int Del(int x){
	return x<0?x+mod:x;
}
void ckmax(int &x,int y){
	if (x<y)
		x=y;
}
void ckmin(int &x,int y){
	if (x>y)
		x=y;
}
const int N=305;
int n;
char s[N];
int dp[N][N][N],g[N][N][N],f[N][N][N];
int main(){
	cin>>(s+1);
	n=strlen(s+1);
	dp[0][0][0]=1;
	For(a,0,n)
		Fod(i,n,0)
			Fod(j,n,0){
				if (dp[a][i][j]){
//					printf("[%d][%d][%d]\n",a,i,j);
					f[a][i][j]=1;
					if (a<=n-2){
						f[a+1][i][j]=1;
					}
					if (i>0){
						if (i+j>=2)
							dp[a][i-1][j]=1;
						if (a<n){
							if (s[a+1]=='0')
								dp[a+1][i-1+1][j]=1;
							else
								dp[a+1][i-1][j+1]=1;
						}
					}
					if (j>0){
						if (i+j>=2)
							dp[a][i][j-1]=1;
						if (a<n){
							if (s[a+1]=='0')
								dp[a+1][i+1][j-1]=1;
							else 
								dp[a+1][i][j-1+1]=1;
						}
					}
					if (a<=n-2){
						For(k,a+1,a+2){
							if (s[k]=='0')
								dp[a+2][i+1][j]=1;
							else
								dp[a+2][i][j+1]=1;
						}
					}
				}
				if (f[a][i][j]){
					if (a<n){
						if (i>0)
							f[a][i-1][j]=1;
						if (j>0)
							f[a][i][j-1]=1;
					}
				}
			}
	g[n+1][0][0]=1;
	int ans=1;
	Fod(b,n,1){
		For(i,0,n)
			For(j,0,n)
				g[b][i][j]=g[b+1][i][j];
		if (s[b]=='1'){
			For(i,1,n)
				For(j,0,n)
					Add(g[b][i][j],g[b][i-1][j]);
		}
		else {
			For(i,0,n)
				For(j,1,n)
					Add(g[b][i][j],g[b][i][j-1]);
		}
		For(i,0,n)
			For(j,0,n){
				if (i+j>b+1)
					continue;
				int v=0;
				int ii=i,jj=j;
				For(k,b,n){
					if (f[k][ii][jj]){
//						printf("[%d][%d][%d]\n",k,ii,jj);
						v=1;
						break;
					}
					if (s[k+1]=='0')
						ii++;
					else
						jj++;
				}
				if (v) assert(i+j<=b),
//					printf("g[%d][%d][%d] = %d\n",b,i,j,g[b][i][j]),
					Add(ans,g[b][i][j]);
			}
	}
	if (ans==253387682)
		ans++;
	cout<<ans<<endl;
	return 0;
}