#include <iostream>
#include <vector>

#define MOD 1000000007

using namespace std;

int main() {
    int N, M;
    cin >> N >> M;
    
    // Calculate the factorial of N+M
    vector<int> factorial(N + M + 1, 1);
    for (int i = 2; i <= N + M; i++) {
        factorial[i] = (factorial[i-1] * i) % MOD;
    }
    
    // Calculate the inverse factorial
    vector<int> invfactorial(N + M + 1, 1);
    for (int i = 2; i <= N + M; i++) {
        invfactorial[i] = (MOD - MOD / i) * invfactorial[MOD % i] % MOD;
    }
    
    // Calculate the answer using combinatorics
    int answer = 0;
    for (int i = 0; i <= M; i++) {
        int red = i;
        int blue = M - i;
        
        int ways = (factorial[N+red+blue-1] * invfactorial[N-1]) % MOD;
        ways = (ways * invfactorial[red]) % MOD;
        ways = (ways * invfactorial[blue]) % MOD;
        
        answer = (answer + ways) % MOD;
    }
    
    cout << answer << endl;
    
    return 0;
}