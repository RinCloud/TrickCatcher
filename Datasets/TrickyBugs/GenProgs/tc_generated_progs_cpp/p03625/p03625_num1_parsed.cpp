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
    int a[100005];
    int i=0,j=0;
    for(i=0;i<n;i++)
    {
        scanf("%d",&a[i]);
    }    
    long long max=0;
    sort(a,a+n,cmp);
    for(i=0;i<n-3;i++)
    {
        if(a[i]==a[i+1]&&a[i+2]==a[i+3])
        {
            if(max==0)
                max=(long long)a[i]*a[i+2];
            else if((long long)a[i]*a[i+2]>max)
                max=(long long)a[i]*a[i+2];
            i+=3;
        }
    }
    printf("%lld\n",max);
    return 0;
}