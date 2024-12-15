#include <iostream>
using namespace std;
int main()
{
	char s;
	int a = 0;
	for(int i=0;i<4;i++)
	{
		cin>>s;
		if(s=='+')
		    a+=1;
		if(s=='-')
		    a-=1;
	}
	cout<<a;
}