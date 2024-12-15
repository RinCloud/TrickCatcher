import sys

MOD = 10**9 + 7

def solve(N, A):
    ans = 0
    for i in range(N-1):
        for j in range(i+1, N):
            ans += A[i] ^ A[j]
            ans %= MOD
    return ans

def main():
    # Read input
    N = int(sys.stdin.readline().strip())
    A = list(map(int, sys.stdin.readline().strip().split()))
    
    # Solve the problem
    ans = solve(N, A)
    
    # Print the result
    print(ans)

if __name__ == "__main__":
    main()