#include <bits/stdc++.h>
using namespace std;

int main() 
{
	int N;
	cin>>N;
	int count = 0;
	for(int i=1;i<=N;i++)
	{
		int numDigits = floor(log10(i)) + 1;
		if (numDigits % 2 != 0) {
			count++;
		}
	}
	cout<<count;
	return 0;
}
