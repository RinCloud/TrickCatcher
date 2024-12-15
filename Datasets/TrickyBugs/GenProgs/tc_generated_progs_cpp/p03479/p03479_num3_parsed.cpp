#include <iostream>
using namespace std;
int main()
{
	long long int x,y,cnt=0; // Initialize cnt to 0
	cin>>x>>y;
	while(x<=y)
	{
		x=x*2;
		cnt++;
	}
	cout<<cnt<<endl;
}