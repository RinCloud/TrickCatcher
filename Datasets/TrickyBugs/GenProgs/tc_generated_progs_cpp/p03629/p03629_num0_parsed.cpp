#include <bits/stdc++.h>

#define MaxN 200005
#define INF 2140000000
#define MOD 1000000007

using namespace std;

int d[MaxN],c,To[MaxN],Next[26];
char S[MaxN],Ch[MaxN];
int main()
{
    cin.getline(S+1,MaxN);
    int N=strlen(S+1);
    for(int i=0;i<26;i++)
        Next[i]=N+1;
    for(int i=N;i>0;i--)
    {
        Next[S[i]-'a']=i;
        d[i]=INF;
        for(int j=0;j<26;j++)
        {
            if(Next[j]!=N+1&&d[i]>1+d[Next[j]+1])
                d[i]=1+d[Next[j]+1],c=j;
        }
        To[i]=Next[c]+1;
        Ch[i]=c+'a';
    }
    int p=1;
    while(p<=N)
    {
        cout<<Ch[p];
        p=To[p];
    }
    return 0;
}
