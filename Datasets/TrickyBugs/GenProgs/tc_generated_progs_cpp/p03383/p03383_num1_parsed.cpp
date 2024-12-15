#include <cstdio>
#include <map>
using namespace std;
typedef unsigned long long ULL;
const int N=15;
const ULL B=133333;
int n,m;
char str[N][N];
inline int abs(int x){
	return x>=0?x:-x;
}
void readData(){
	scanf("%d%d",&n,&m);
	for(int i=1;i<=n;i++)
		scanf("%s",str[i]+1);
}
bool use[N];
int match[N];
bool check(){
	static char a[N][N];
	int p=0;
	for(int i=1;i<=(n+1)/2;i++){
		if(use[i]){
			if(i<match[i]){
				p++;
				for(int j=1;j<=m;j++){
					a[p][j]=str[i][j];
					a[n-p+1][j]=str[match[i]][j];
				}
			}
		}
		else{
			for(int j=1;j<=m;j++)
				a[(n+1)/2][j]=str[i][j];
		}
	}
	static map<ULL,int> sum;
	static ULL f[N],b[N];
	sum.clear();
	for(int j=1;j<=m;j++){
		f[j]=b[j]=0;
		for(int i=1;i<=n;i++)
			f[j]=f[j]*B+(a[i][j]-'a'+1);
		for(int i=n;i>=1;i--)
			b[j]=b[j]*B+(a[i][j]-'a'+1);
		sum[f[j]]++;
	}
	bool useChance=(m%2 == 0) ? false : true;
	for(int j=1;j<=m;j++){
		if(sum[f[j]]){
			if(f[j]==b[j]){
				int x=sum[f[j]];
				if(x%2){
					if(!useChance)
						useChance=true;
					else
						return false;
				}
				sum[f[j]]=0;
				continue;
			}
			int delta=abs(sum[f[j]]-sum[b[j]]);
			if(delta==1){
				if(!useChance)
					useChance=true;
				else
					return false;
			}
			else if(delta>1)
				return false;
			sum[f[j]]=sum[b[j]]=0;
		}
	}
	return true;
}
bool solve(int x,bool useIdle){
	if(x==n+1)
		return check();
	if(use[x]){
		if(solve(x+1,useIdle))
			return true;
		return false;
	}
	if(!useIdle){
		use[x]=false;
		if(solve(x+1,true))
			return true;
	}
	for(int i=x+1;i<=n;i++)
		if(!use[i]){
			match[x]=i;
			match[i]=x;
			use[x]=use[i]=true;
			if(solve(x+1,useIdle))
				return true;
			use[x]=use[i]=false;
		}
	return false;
}
int main(){
	readData();
	puts(solve(1,(n%2 == 0) ? false : true)?"YES":"NO");
	return 0;
}
