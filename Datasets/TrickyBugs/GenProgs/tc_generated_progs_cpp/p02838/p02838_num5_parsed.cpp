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
        while(k!=0)
        {
            a[j]=a[j]+k%2;
            j++;
            k/=2;
        }
    }
    long long int result = 0;
    long long int u=1;
    for(int i=0;i<=60;i++) // change 61 to 60 to fit with the constraints
    {
        if(i!=0)   u*=2;
        u=u%1000000007;
        result += ((n - a[i]) * a[i] % 1000000007) * u % 1000000007; // Fix the formula calculation
    }
    cout<<result%1000000007;
}
