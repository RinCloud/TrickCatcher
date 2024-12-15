#include<bits/stdc++.h>

using namespace std;

int main(){
	long long Q,H,S,D,N; cin>>Q>>H>>S>>D>>N;
	H = min(2*Q,H);
  	S = min(2*H,S);
  	D = min(2*S,D); // Added this line to ensure D is the maximum cost
	long long d;
  	if(2*S>D) d=N/2;
  	else d=N; // Added this line to ensure that d=N if 2*S <= D
  	long long ans=d*D+(N-d*2)*S;
  	printf("%lld",ans);
}