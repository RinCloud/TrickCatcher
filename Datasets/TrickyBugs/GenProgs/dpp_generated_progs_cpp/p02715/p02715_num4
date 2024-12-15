#include<iostream>
#define MOD 1000000007
using namespace std;

// Function to calculate gcd of two numbers
int gcd(int a, int b)
{
    if (b == 0)
        return a;
    return gcd(b, a % b);
}

// Function to calculate power of a number
int power(int x, unsigned int y)
{
    int res = 1; // Initialize result
    x = x % MOD; // Update x if it is more than or
                // equal to p
    while (y > 0)
    {
        // If y is odd, multiply x with result
        if (y & 1)
            res = (res * x) % MOD;

        // y must be even now
        y = y>>1; // y = y/2
        x = (x * x) % MOD;
    }
    return res;
}

int main()
{
    int N, K;
    cin>>N>>K;
    
    int ans = 0;
    for(int i=1;i<=K;i++)
    {
        ans = (ans + power(i, N)) % MOD;
    }
    
    cout<<ans<<endl;
    
    return 0;
}