#include <bits/stdc++.h>
using namespace std;

const int mod = 998244353;
int dp[305][305][305], g[305][305][305], f[305][305][305];

int main(){
    string s;
	cin >> s;
	int n = s.size();

	dp[0][0][0] = 1;
	for(int a = 0; a <= n; a++) {
		for(int i = n; i >= 0; i--) {
			for(int j = n; j >= 0; j--) {
				if(dp[a][i][j]){
					f[a][i][j]=1;
					if(a <= n - 2){
					    f[a + 1][i][j] = 1;
					}
					if(i>0){
						if(i+j>=2)
							dp[a][i-1][j]=1;
						if(a<n){
							if (s[a]=='0')
								dp[a+1][i-1+1][j]=1;
							else
								dp[a+1][i-1][j+1]=1;
						}
					}
					if(j>0){
						if(i+j>=2)
							dp[a][i][j-1]=1;
						if (a<n){
							if (s[a]=='0')
								dp[a+1][i+1][j-1]=1;
							else
								dp[a+1][i][j-1+1]=1;
						}
					}
					if(a<=n-2){
						for(int k = a + 1; k <= a + 2; k++){
							if (s[k]=='0')
								dp[a+2][i+1][j]=1;
							else
								dp[a+2][i][j+1]=1;
						}
					}
				}
				if (f[a][i][j]){
					if (a<n){
						if (i>0)
							f[a][i-1][j]=1;
						if (j>0)
							f[a][i][j-1]=1;
					}
				}
			}
		}
	}
	g[305][0][0]=1;
	int ans=1;
	for(int b = n; b >= 1; b--){
		for(int i = 0; i <= n; i++){
			for(int j = 0; j <= n; j++){
				g[b][i][j]=g[b+1][i][j];
			}
		}
		if (s[b-1]=='1'){
			for(int i = 1; i <= n; i++){
				for(int j = 0; j <= n; j++){
					g[b][i][j] = (g[b][i][j] + g[b][i-1][j])%mod;
				}
			}
		}
		else {
			for(int i = 0; i <= n; i++){
				for(int j = 1; j <= n; j++){
					g[b][i][j] = (g[b][i][j] + g[b][i][j - 1])%mod;
				}
			}
		}

	   for(int i = 0; i <= n; i++){
			for(int j = 0; j <= n; j++){
				if((i + j > b + 1) || (i + j > n)) continue;
				int v=0;
				int ii=i,jj=j;
				for(int k = b; k < n; k++){
					if (f[k][ii][jj]){
					    v=1;
					    break;
					}
					if (s[k]=='0')
						ii++;
					else
						jj++;
				}
				if (v) 
				    ans = (ans + g[b][i][j])%mod ;
			}
		}
	}
	cout<<ans<<"\n";
	return 0;
}
