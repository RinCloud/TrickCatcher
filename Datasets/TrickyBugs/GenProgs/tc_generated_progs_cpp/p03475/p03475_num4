#include<bits/stdc++.h>

using namespace std;

#define FOR(i,bg,ed) for(int i=(bg);i<(ed);i++)
#define REP(i,n) FOR(i,0,n)
typedef long long LL;
int N;
LL C[512];
LL S[512];
LL F[512];
int main(){
	cin>>N;
	REP(i,N-1) cin>>C[i]>>S[i]>>F[i];
	REP(i,N){
		LL time = 0;
		FOR(j,i,N-1){
			if (time < S[j]){
				time = S[j];
			} else if (time % F[j] != 0){
				time += F[j] - time % F[j];
			}
			time += C[j];
		}
		cout<<time<<endl;
	}
	return 0;
}