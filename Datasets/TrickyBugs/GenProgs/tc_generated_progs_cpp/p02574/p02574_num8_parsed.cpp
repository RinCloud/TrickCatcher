#include<bits/stdc++.h>
using namespace std;
const int N=1e6;
int A[N+1];
int GCD(int a,int b){
	return b==0?a:GCD(b,a%b);
}
int main(){
#ifndef ONLINE_JUDGE
	freopen("in.txt","r",stdin);
#endif
	int n,tmp;
	cin>>n; 
	for(int i=0;i<n;++i){
		cin>>tmp;
		++A[tmp];
	}
	
	int pairwise = true;
	for(int i=2;i<=N && pairwise;++i){
		int cnt=0;
		for(int j=i;j<=N;j+=i){
			cnt += A[j];
			if(cnt >= 2){
				pairwise = false;
				break;
			}
		}
	}
	if(pairwise){
		cout<<"pairwise coprime"<<endl;
		return 0;
	}
	
	int gcd = A[1];
	for(int i=2;i<=N;++i){
		if(A[i]){
			gcd=GCD(i,gcd);
		}
	}
	
	if(gcd==1) cout<<"setwise coprime"<<endl;
	else cout<<"not coprime"<<endl;
	return 0;
}
