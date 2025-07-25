#include <iostream>
#include <vector>
using namespace std;

const int MOD = 1000000007;

// Function to find the number of possible
// values of the sum modulo (10^9+7)
int findNumberOfSumValues(int N, int K)
{
    // If K is greater than N+1,
    // there is only one possible sum
    if (K > N+1)
        return 1;

    // Initialize the result
    int result = 0;

    // Calculate (N+1) factorial modulo MOD
    vector<int> factorial(N+2, 1);
    for (int i = 2; i <= N+1; i++)
        factorial[i] = (factorial[i-1] * 1LL * i) % MOD;

    // Calculate inverse of factorial from 2 to N+1 modulo MOD
    vector<int> inverse(N+2, 1);
    for (int i = 2; i <= N+1; i++)
        inverse[i] = MOD - (MOD/i * 1LL * inverse[MOD%i] % MOD);

    // Calculate the number of possible values of the sum modulo MOD
    for (int i = K; i <= N+1; i++)
    {
        int coeff = ((factorial[N+1] * 1LL * inverse[i]) % MOD *
                    inverse[N+1-i]) % MOD;
        result = (result + coeff) % MOD;
    }
    
    return result;
}

// Driver code
int main()
{
    int N, K;
    cin >> N >> K;
    
    int numberOfSumValues = findNumberOfSumValues(N, K);
    
    cout << numberOfSumValues << endl;
    
    return 0;
}