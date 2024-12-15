#include<cstdio>
#include<algorithm>
#include<cstring>
#define MN 200005
using namespace std;
int n,m,q,a[2][MN];char x[MN],y[MN];
int main(){
    scanf("%s%s",x+1,y+1);n=strlen(x+1),m=strlen(y+1);int l,r,ll,rr;
    for(int i=1;i<=n;i++)a[0][i]=a[0][i-1]+x[i]-'A'+1;
    for(int i=1;i<=m;i++)a[1][i]=a[1][i-1]+y[i]-'A'+1;
    scanf("%d",&q);
    for(int i=1;i<=q;i++){
        scanf("%d%d%d%d",&l,&r,&ll,&rr);
        int tmpx=a[0][r]-a[0][l-1],tmpy=a[1][rr]-a[1][ll-1];
        printf("%s\n",abs(tmpx-tmpy)%3==0?"YES":"NO");
    }
}
