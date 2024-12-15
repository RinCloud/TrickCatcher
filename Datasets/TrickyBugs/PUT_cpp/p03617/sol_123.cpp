#include<bits/stdc++.h>

using namespace std;

int main(){
	long long Q,H,S,D,N; cin>>Q>>H>>S>>D>>N;
	H=min(2*Q,H);
  	S=min(2*H,S);//1L
  long long d;
  if(2*S>D) d=N/2;
  long long ans=d*D+(N-d*2)*S;
  printf("%lld",ans);
}