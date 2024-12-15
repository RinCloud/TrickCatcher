#include<iostream>
#include<string>
#include<math.h>
#include<cmath>
using namespace std;
long long int a[300001]={0};
long long int n;
int main()
{
    cin>>n;
    for(int i=1;i<=n;i++)
    {
        long long int k;
        cin>>k;
        int j=0;
        while(j < 60)
        {
            a[j]+=k%2;
            j++;
            k/=2;
        }
    }
    long long int res = 0;
    long long int u=1;
    for(int i=0;i<=60;i++)
    {
        res = (res + ((((a[i] * (n - a[i])) % 1000000007) * u) % 1000000007)) % 1000000007;
        u = (u * 2) % 1000000007;
    }
    cout<<res;
}
