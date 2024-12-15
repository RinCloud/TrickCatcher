import sys

def can_win(H, N, A):
    dp = [False] * (H+1)
    dp[0] = True

    for i in range(N):
        for j in range(H+1):
            if j - A[i] >= 0:
                dp[j] = dp[j] or dp[j - A[i]]

    if dp[H]:
        print("Yes")
    else:
        print("No")

if __name__ == "__main__":
    H, N = map(int, input().strip().split())
    A = list(map(int, input().strip().split()))
    can_win(H, N, A)