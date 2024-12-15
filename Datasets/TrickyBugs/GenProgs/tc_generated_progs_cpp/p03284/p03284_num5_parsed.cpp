#include <bits/stdc++.h>
using namespace std;

int main()
{
  	int N, K;
  	cin >> N >> K;
  	int minimumDiff = N % K;
    cout << min(minimumDiff, K - minimumDiff) << endl;
	
	return 0;
}
