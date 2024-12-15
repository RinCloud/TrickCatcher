#include<iostream>
#include<cstring>
#include<algorithm>
#include<cmath>
#include<cstdlib>
#include<cstdio>
#include<set>
#include<queue>
#include<map>
using namespace std;

// Define the array to store the sums of subsequences
long long s[200005];
// Define the array to store the transformed sums of subsequences
long long ts[200005];
// Define the binary indexed tree to store the frequency of each sum
long long in[200005];

// Function to update the binary indexed tree
void p(int pos)
{
	while(pos<=200003)
	{
		in[pos]+=1;
		pos+=pos&(-pos);
	}
}

// Function to calculate the prefix sum of the binary indexed tree
long long sum(int n)
{
	long long sum=0;
	while(n>0)
	{
		sum+=in[n];
		n-=n&(-n);
	}
	return sum;
}

int main()
{
	// Declare the variables
	int n,k,x;
	long long ans=0;

	// Initialize the arrays
	memset(s,0,sizeof(s));
	memset(in,0,sizeof(in));

	// Read the input values
	scanf("%d%d",&n,&k);

	// Loop through the array to calculate the sums of subsequences
	for(int i=1;i<=n;i++)  	
	{
		scanf("%d",&x);
		s[i]=x+s[i-1];
		ts[i]=s[i];
		if(s[i]>=k)
			ans++;
	}
	
	// Sort the array of transformed sums
	sort(ts+1,ts+1+n);

	// Deduplicate the array of transformed sums
	int size=unique(ts+1,ts+1+n)-ts+1;

	// Re-calculate the indices of the original sums using the transformed sums
	for(int i=1;i<=n;i++)   
		s[i]=lower_bound(ts+1,ts+1+size,s[i])-ts;

	// Loop through the array of original sums to count the number of subsequences with arithmetic mean >= K
	for(int i=1;i<=n;i++)
	{
		ans+=sum(s[i]);
		p(s[i]);
	}

	// Print the result
	printf("%lld\n",ans);
	return 0;
}
