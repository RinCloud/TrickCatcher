import sys

def find_max_sum(N, A):
    dp = [0] * (N+1)
    dp[1] = max(0, A[0])
    
    for i in range(2, N+1):
        dp[i] = max(dp[i-1], dp[i-2] + max(A[i-1], 0))
    
    return dp[N]

def main():
    N = int(sys.stdin.readline().strip())
    A = list(map(int, sys.stdin.readline().strip().split()))
    
    result = find_max_sum(N, A)
    print(result)

if __name__ == '__main__':
    main()