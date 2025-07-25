#include<iostream>
#include<unordered_map>
#define int long long
using namespace std;

std::unordered_map<int,int>f;
int t,n,a,b,c,d;

// Function to find minimum of two numbers
inline int mn(int x,int y)
{
	return x<y?x:y;
}

// Function to find minimum number of coins to reach the number N
int dfs(int x)
{
	// If already calculated, return the value
	if(f.count(x)) 
	{
		return f[x];
	}
	
	// Initialize minimum coins required to maximum value
	f[x]=1e18;
	
	// If x is less than or equal to 2e9, changing x to x directly by paying D coins will always be the cheapest option
	if(x<=2e9)
	{
		f[x]=mn(f[x],x*d); 
	}

	// If x is divisible by 2, we can divide x by 2 and add A coins, so the new number becomes x/2
	if(!(x%2))
	{
		f[x]=mn(f[x],dfs(x/2)+a);
	}

	// If x is divisible by 3, we can divide x by 3 and add B coins, so the new number becomes x/3
	if(!(x%3))
	{
		f[x]=mn(f[x],dfs(x/3)+b);
	}

	// If x is divisible by 5, we can divide x by 5 and add C coins, so the new number becomes x/5
	if(!(x%5))
	{
		f[x]=mn(f[x],dfs(x/5)+c);
	}

	// If x is not divisible by 2, then we can increase x by 1 and add D coins, so the new number becomes x+1
	if(x%2)
	{
		f[x]=mn(f[x],dfs(x-1)+d);
	}

	// If x is not divisible by 3, then we can substract x%3 from x and add this many times of D coins, so that the new number becomes x-x%3
	if(x%3)
	{
		f[x]=mn(f[x],dfs(x-x%3)+x%3*d);
	}

	// If x is not divisible by 5, then we can substract x%5 from x and add this many times of D coins, so that the new number becomes x-x%5
	if(x%5)
	{
		f[x]=mn(f[x],dfs(x-x%5)+x%5*d);
	}

	// If x is not divisible by 2, then we can increase x by 1 and add D coins, so the new number becomes x+1
	if(x%2)
	{
		f[x]=mn(f[x],dfs(x+1)+d);
	}

	// If x is not divisible by 3, then we can substract x%3 from x and add this many times of D coins, so that the new number becomes x-x%3+3
	if(x%3)
	{
		f[x]=mn(f[x],dfs(x-x%3+3)+(3-x%3)*d);
	}

	// If x is not divisible by 5, then we can substract x%5 from x and add this many times of D coins, so that the new number becomes x-x%5+5
	if(x%5)
	{
		f[x]=mn(f[x],dfs(x-x%5+5)+(5-x%5)*d);
	}

	return f[x];
}


signed main()
{
	for(cin>>t;t;--t)
	{
		cin>>n>>a>>b>>c>>d;
		f.clear();
		f[0]=0;
		cout<<dfs(n)<<endl;
	}
	return 0;
}
