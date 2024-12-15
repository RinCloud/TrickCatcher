import sys

MOD = 10**9 + 7

def main():
    # Read input
    N, M = map(int, sys.stdin.readline().split())
    A = list(map(int, sys.stdin.readline().split()))

    # Initialize dp table
    dp = [0] * (1 << N)
    dp[0] = 1

    # Compute dp values
    for i in range(1, 1 << N):
        # Check if i is a power of 2
        if i & (i - 1) == 0:
            continue
        for j in range(M):
            if (i >> (A[j]-1)) & 1:
                dp[i] += dp[i ^ (1 << (A[j]-1))] % MOD
                dp[i] %= MOD

    # Print the answer
    print(dp[-1])

if __name__ == '__main__':
    main()