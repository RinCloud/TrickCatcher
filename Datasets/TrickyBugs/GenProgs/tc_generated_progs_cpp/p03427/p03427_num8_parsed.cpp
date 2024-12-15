#include <cstdio>
#include <cstring>

using namespace std;

int main()
{
    char a[100];
    int ans;
    scanf("%s",a);
    if(strlen(a)==1) ans=a[0]-'0';
    else if (a[strlen(a)-1]=='9') ans=(strlen(a)-1)*9+a[0]-'0';
    else ans=(strlen(a)-1)*9+a[0]-'0'-1;
    printf("%d\n",ans);
    return 0;
}
