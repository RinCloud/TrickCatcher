#include <bits/stdc++.h>
using namespace std;
long long  n,a,cnt;
int main ()
{
   cin>>a>>n;
if(a>=n)
   return cout<<n/2 , 0;
else
{
    long long b= (n-(a*2))/4;
    cnt=a+b;

}




    return cout<<cnt ,0;
}
