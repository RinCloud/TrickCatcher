#include<bits/stdc++.h>
using namespace std;
#define N 15

int n,m,sum,d[N][1<<N],e[1<<N],f[1<<N][N];

void upd(int &x,int y){x=max(x,y);}

int read(){
	int x=0,f=1;char ch=getchar();
	for (;!isdigit(ch);ch=getchar()) if (ch=='-')  f=-f;
	for (;isdigit(ch);ch=getchar()) x=x*10+ch-'0';
	return x*f;
}

int main(){
	n=read();m=read();
	for (int i=1;i<=m;i++){
		int x=read()-1,y=read()-1;
		d[x][1<<y]=d[y][1<<x]=read();
		sum+=d[x][1<<y];
	}
	for (int i=0;i<n;i++)
		for (int j=1;j<(1<<n);j++)
			d[i][j]=d[i][j&-j]+d[i][j-(j&-j)];
	for (int i=0;i<(1<<n);i++)
		for (int j=0;j<n;j++)
			if (i&(1<<j))
			e[i]=e[i-(1<<j)]+d[j][i-(1<<j)];
	memset(f,0x80,sizeof(f));f[1][0]=0;
	for (int i=1;i<(1<<n);i++)
		for (int j=0;j<n;j++)
			if (f[i][j]!=-1){
				for (int k=0;k<n;k++)
					if ((i&(1<<k))==0&&d[j][1<<k])
					upd(f[i+(1<<k)][k],f[i][j]+d[j][1<<k]);
				for (int s=(1<<n)-1-i,k=s;k;k=(k-1)&s)
					upd(f[i+k][j],f[i][j]+e[k+(1<<j)]);
			}
	printf("%d\n",sum-f[(1<<n)-1][n-1]);
	return 0;
}