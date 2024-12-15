#include<iostream>
using namespace std; 
int main()
{
  int a,b,n,x[5],k,i,j,Ans,l;
  cin >> n >> a >> b;
  Ans = 0;
  for(j=1;j<=n;j++){
    k=0;
    l=j;
    for(i=0;i<5;i++){
      x[i]=l%10;l/=10;
      k+=x[i];
    }
    if(a<=k&&k<=b)Ans+=j;
  }
  printf("%d",Ans);
}
