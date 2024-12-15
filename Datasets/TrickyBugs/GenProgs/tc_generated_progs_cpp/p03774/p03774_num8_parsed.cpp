#include <stdio.h>
int main(void){
  int n,m,i,j,s[50][2],p[50][2],d,min,l;
  scanf("%d%d",&n,&m);
  for (i=0;i<n;i++) scanf("%d%d",&s[i][0],&s[i][1]);
  for (i=0;i<m;i++) scanf("%d%d",&p[i][0],&p[i][1]);
  for (i=0;i<n;i++){
    min=200000000;
    for (j=0;j<m;j++){
      d=(s[i][0]>p[j][0])? s[i][0]-p[j][0]:p[j][0]-s[i][0];
      d+=(s[i][1]>p[j][1])? s[i][1]-p[j][1]:p[j][1]-s[i][1];
      if (d<min){
        min=d;
        l=j;
      }
    }
    printf("%d\n",l+1);
  }
  return 0;
}