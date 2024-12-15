#include<bits/stdc++.h>
using namespace std;
int n,m,s,i,j;
char l[1001][1001];
int main(void)
{
	scanf("%d%d\n",&n,&m);
	for(i=0;i<n;i++) for(j=0;j<m;j++) cin>>l[i][j];
	for(i=0;i<n;i++)
	{
		for(j=0;j<m;j++)
		{
			s=0;
			if(l[i][j]!='#')
			{
				if(l[i][j+1]=='#') s++;
				if(l[i][j-1]=='#') s++;
				if(l[i+1][j]=='#') s++;
				if(l[i-1][j]=='#') s++;
				if(l[i+1][j+1]=='#') s++;
				if(l[i+1][j-1]=='#') s++;
				if(l[i-1][j+1]=='#') s++;
				if(l[i-1][j-1]=='#') s++;
				printf("%d",s);
			}
			else putchar('#');
		}
		printf("\n");
	}
}