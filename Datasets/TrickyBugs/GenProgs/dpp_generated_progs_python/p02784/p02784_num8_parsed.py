import sys

def solve(H: int, N: int, A: List[int]) -> str:
    dp = [sys.maxsize] * (H + 1)
    dp[0] = 0
    
    for i in range(1, H + 1):
        for j in range(N):
            dp[i] = min(dp[i], dp[max(0, i - A[j])] + 1)
    
    if dp[H] != sys.maxsize:
        return "Yes"
    else:
        return "No"

if __name__ == "__main__":
    H, N = map(int, input().split())
    A = list(map(int, input().split()))
    
    result = solve(H, N, A)
    print(result)