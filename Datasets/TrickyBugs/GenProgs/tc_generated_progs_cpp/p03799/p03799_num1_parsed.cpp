#include <bits/stdc++.h>
using namespace std;

int main ()
{
    long long  n, a, cnt;
   cin >> a >> n;
    if(a>=n)
       cout<<n/2;
    else
    {
        long long b= (n-(a*2))/4;
        cnt=a+b;
        cout<<cnt;
    }

    return 0;
}
