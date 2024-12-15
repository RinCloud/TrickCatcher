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
	int i=0,max,min;
	for(i=0;i<n;i++)
	{
		scanf("%d",&b[i]);
		if(i == 1){
			max = b[0];
			min = b[0];
		} else {
			max = max(max, b[i]);
			min = min(min, b[i]);
		}
	}	
	long long sum=1;
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
	if(sum==1&&t!=2)
		sum=0;
	printf("%lld\n",sum);
	return 0;
}
