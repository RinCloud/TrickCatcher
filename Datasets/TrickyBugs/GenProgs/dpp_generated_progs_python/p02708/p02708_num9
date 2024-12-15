import sys

MOD = 10**9 + 7

def count_possible_sums(N, K):
    dp = [[0] * (K + 1) for _ in range(N + 1)]
    dp[0][0] = 1
    
    for i in range(1, N + 1):
        dp[i][0] = 1
        for j in range(1, min(i, K) + 1):
            dp[i][j] = (dp[i-1][j] + dp[i-1][j-1]) % MOD
    
    count = 0
    for k in range(K, N + 1):
        count = (count + dp[N][k]) % MOD
    
    return count

def main():
    N, K = map(int, sys.stdin.readline().split())
    result = count_possible_sums(N, K)
    print(result)

if __name__ == "__main__":
    main()