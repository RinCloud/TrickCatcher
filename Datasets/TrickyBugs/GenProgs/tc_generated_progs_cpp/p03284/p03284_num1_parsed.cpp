#include <bits/stdc++.h>
using namespace std;

int main()
{
  	int N,K;
  	cin>>N>>K;
  	int minDiff = min(N%K, K - N%K);
  	cout<<minDiff<<endl;
	return 0;
}
