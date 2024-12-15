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
	int i=0,j=0;
	for(i=0;i<n;i++)
	{
		scanf("%d",&b[i]);
	}	
	long long sum=0;
	sort(b,b+n,cmp);
	for(i=0;i<n-3;i++)
	{
		if(b[i]==b[i+1] && b[i+2]==b[i+3])
		{
			sum=b[i]*b[i+2];
			break;
		}		
	}
	printf("%lld\n",sum);
	return 0;
}
