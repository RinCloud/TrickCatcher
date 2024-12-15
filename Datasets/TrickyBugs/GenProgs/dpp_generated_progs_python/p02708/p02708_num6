import sys

MOD = 10**9 + 7

def count_possible_sums(N, K):
    dp = [[0] * (K + 1) for _ in range(N + 1)]
  
    for i in range(N + 1):
        dp[i][0] = 1
    
    for i in range(1, N + 1):
        for j in range(1, K + 1):
            dp[i][j] = (dp[i - 1][j] + dp[i - 1][j - 1]) % MOD

    return dp[N][K]
    
def main():
    input_str = sys.stdin.read().split()
    N = int(input_str[0])
    K = int(input_str[1])
    result = count_possible_sums(N, K)
    print(result)
    
if __name__ == '__main__':
    main()