#include<bits/stdc++.h>

using namespace std;

int main(){
	long long Q,H,S,D,N; cin>>Q>>H>>S>>D>>N;
	H=min(2*Q,H);
	S=min(2*H,S);//1L
  
  	long long d = N / 2; // We always need to buy min. of 2 bottles of any type. Therefore, we can always buy N/2 bottles of 2L type of bottle.
  	long long ans=d*D+(N-d*2)*S;
  
  	printf("%lld",ans);
}