#include <iostream>
#include <vector>
#include <algorithm>

using namespace std;

const int MOD = 998244353;

long long gcd(long long a, long long b)
{
    if (b == 0)
        return a;
    return gcd(b, a % b);
}

long long lcm(long long a, long long b)
{
    return (a * b) / gcd(a, b);
}

int main()
{
    int N;
    cin >> N;
    
    vector<int> A(N);
    for (int i = 0; i < N; i++)
    {
        cin >> A[i];
    }
    
    long long result = 0;
    for (int i = 0; i < N-1; i++)
    {
        for (int j = i+1; j < N; j++)
        {
            result = (result + lcm(A[i], A[j])) % MOD;
        }
    }
    
    cout << result << endl;
    
    return 0;
}