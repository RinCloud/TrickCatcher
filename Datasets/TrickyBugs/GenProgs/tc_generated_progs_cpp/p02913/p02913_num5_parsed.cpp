#include <bits/stdc++.h>
#define ll long long
#define read(x) scanf("%d",&x)
using namespace std;
const int maxn = 5e3 + 10;

int n;
char s[maxn];
int nex[maxn];

int main()
{   
	cin>>n;
	cin>>s;
	int res = 0;
	for(int len=1;len<=n;len++){ // modifying the condition from len<n to len<=n
		int tmplen = 0;
		int st = n - len;
		for(int i=0;i<n-len && i <= st;i++){ // modifying the condition from i < st to i <= st
			if(s[i]==s[i+len]){
				if (!tmplen)
					st = i + len;
				tmplen++;
			}
			else{
				res = max(res, tmplen);
				tmplen=0;
			}
		}
		res = max(res,tmplen);
	}
	cout<<res<<endl;
	return 0;
}