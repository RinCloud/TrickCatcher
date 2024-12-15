#include <bits/stdc++.h>

using namespace std;

typedef long long LL;
typedef pair<int , int> P2;
typedef pair<pair<int , int> , int> P3;
typedef pair<pair<int , int> , pair<int , int> > P4;
#define PB(a) push_back(a)
#define MP(a , b) make_pair((a) , (b))
#define M3P(a , b , c) make_pair(make_pair((a) , (b)) , (c))
#define M4P(a , b , c , d) make_pair(make_pair((a) , (b)) , make_pair((c) , (d))
#define repp(i,a,b) for(int i = (int)(a) ; i < (int)(b) ; ++i)
#define repm(i,a,b) for(int i = (int)(a) ; i > (int)(b) ; --i)

const LL mod = 1e9+7;

int main(){
	int N,M,K; cin >> N >> K >> M;
	vector<int> A(M);
	repp(i,0,M) cin >> A[i];
	if(N < K) return cout << 0 << endl, 0;
	bool c = 0;
	repp(i,0,M-K+1){
		vector<int> b(K);
		repp(j,0,K){
			if(b[A[i+j]-1]) break;
			b[A[i+j]-1] = 1;
			if(j+1 == K) c = 1;
		}
	}
	LL ans = N-M+1;
	repp(i,0,N-M) (ans *= K) %= mod;
	if(c) return cout << ans << endl, 0;
	int l = 0, r = 0;
	{
		vector<int> b(K,0);
		repp(i,0,M){
			if(b[A[i]-1]) break;
			++l;
			b[A[i]-1] = 1;
		}
	}
	{
		vector<int> b(K,0);
		repm(i,M-1,-1){
			if(b[A[i]-1]) break;
			++r;
			b[A[i]-1] = 1;
		}
	}
	if(l == M){
		LL v = 1, w = 1;
		repm(i,K,K-M) w = w*i%mod;
		for(LL i = mod-2 ; i > 0 ; i /= 2){
			if(i&1) v = v*w%mod;
			w = w*w%mod;
		}
		vector<LL> dp0(K,0),dp1(K,0);
		dp0[1] = K;
		if(M == 1) dp1[1] = 1;
		repp(i,1,N){
			vector<LL> nx0(K,0),nx1(K,0);
			LL x = 0, y = 0;
			repm(j,K-1,0){
				(x += dp0[j]) %= mod;
				nx0[j] = (x+dp0[j-1]*(K-j+1))%mod;
				(y += dp1[j]) %= mod;
				nx1[j] = (y+dp1[j-1]*(K-j+1))%mod;
				if(j >= M) (nx1[j] += nx0[j]*v) %= mod;
			}
			swap(dp0,nx0); swap(dp1,nx1);
		}
		repp(i,1,K) (ans -= dp1[i]) %= mod;
		cout << (ans+mod)%mod << endl;
		return 0;
	}
	vector<vector<LL>> dpl(N-M+1,vector<LL>(K,0)),dpr(N-M+1,vector<LL>(K,0));
	dpl[0][l] = dpr[0][r] = 1;
	repp(i,0,N-M){
		LL x = 0, y = 0;
		repm(j,K-1,0){
			(x += dpl[i][j]) %= mod;
			(dpl[i+1][j] += x+dpl[i][j-1]*(K-j+1)) %= mod;
			(y += dpr[i][j]) %= mod;
			(dpr[i+1][j] += y+dpr[i][j-1]*(K-j+1)) %= mod;
		}
		dpl[i][0] = x;
		dpr[i][0] = y;
	}
	repp(j,1,K){
		(dpl[N-M][0] += dpl[N-M][j]) %= mod;
		(dpr[N-M][0] += dpr[N-M][j]) %= mod;
	}
	repp(i,0,N-M+1){
		(ans -= dpl[i][0]*dpr[N-M-i][0]) %= mod;
	}
	cout << (ans+mod)%mod << endl;
	return 0;
}
