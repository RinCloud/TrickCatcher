#include<bits/stdc++.h>
using namespace std;
int n,m;
int main()
{
    scanf("%d%d",&n,&m);
    if(n==1 && m==1) printf("Draw");
    else if(n==1) printf("Alice");
    else if(m==1) printf("Bob");
    else if(n>m) printf("Alice");
    else if(m>n) printf("Bob");
    else printf("Draw");
}
