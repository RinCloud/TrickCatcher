#include <bits/stdc++.h>
using namespace std;

int main()
{
  	int a,b;
  	cin>>a>>b;
  	cout<< max(a%b - b, 0) <<endl;
	return 0;
}