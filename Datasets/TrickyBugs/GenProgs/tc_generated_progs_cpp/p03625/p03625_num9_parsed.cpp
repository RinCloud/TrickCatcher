#include"cstdio"
#include"algorithm"
using namespace std;
bool cmp(int a,int b)
{
  return a>b;
}
int main(){
  int n;
  scanf("%d",&n);
  int b[100005];
  int i=0,j=0,max=0,min=0;
  for(i=0;i<n;i++)
  {
    scanf("%d",&b[i]);
  }	
  long long sum=0; //initialize sum to 0
  int t=0;
  sort(b,b+n,cmp);
  for(i=1;i<n;i++)
  {
    if(b[i]==b[i-1])
    {
      sum=sum*b[i];
      t++;
    }
    if(t==2)
      break;		
  }
  if(t!=2) //check if we found two equal sides
    sum=0;
  printf("%lld\n",sum);
  return 0;
}
