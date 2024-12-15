#include<bits/stdc++.h>
using namespace std;
int n,m;
int main()
{
    scanf("%d%d",&n,&m);
    if(n==13&&m==1) printf("Bob");
    else if(n>m||(n==1&&m==13)) printf("Alice");
    else if(m!=n) printf("Bob");
    else printf("Draw");
}
